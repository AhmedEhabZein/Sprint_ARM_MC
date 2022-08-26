 /******************************************************************************
 *
 * Module: Port
 *
 * File Name: Port.c
 *
 * Description: Source file for TM4C123GH6PM Microcontroller - Port Driver.
 *
 * Author: Ahmed Ehab
 ******************************************************************************/

#include "Port.h"
#include "Port_Regs.h"

/* Holds the status of the port */
STATIC uint8 Port_Status = PORT_NOT_INITIALIZED;

/* Holds the pointer of the Port_PinConfig */
STATIC const Port_ConfigType* Port_ConfigPtr = NULL_PTR;

/************************************************************************************
* Service Name: Port_Init
* Sync/Async: Synchronous
* Reentrancy: Non reentrant
* Parameters (in): ConfigPtr - Pointer to configuration set
* Parameters (inout): None
* Parameters (out): None
* Return value: None
* Description: Function to Initialize the Port Driver module.
************************************************************************************/
void Port_Init(const Port_ConfigType* ConfigPtr)
{

    Port_Status = PORT_INITIALIZED;
    Port_ConfigPtr = ConfigPtr;
    
    for(Port_PinType pin = ZERO; pin < PORT_CONFIGURED_CHANNLES; pin++){
      
        volatile uint32 * PortGpio_Ptr = NULL_PTR; /* point to the required Port Registers base address */
        volatile uint32 delay = 0;
    
        switch(Port_ConfigPtr->Channels[pin].port_num)
        {
            case  PORTA: PortGpio_Ptr = (volatile uint32 *)GPIO_PORTA_BASE_ADDRESS; /* PORTA Base Address */
                    break;
            case  PORTB: PortGpio_Ptr = (volatile uint32 *)GPIO_PORTB_BASE_ADDRESS; /* PORTB Base Address */
                    break;
            case  PORTC: PortGpio_Ptr = (volatile uint32 *)GPIO_PORTC_BASE_ADDRESS; /* PORTC Base Address */
                     break;
            case  PORTD: PortGpio_Ptr = (volatile uint32 *)GPIO_PORTD_BASE_ADDRESS; /* PORTD Base Address */
                     break;
            case  PORTE: PortGpio_Ptr = (volatile uint32 *)GPIO_PORTE_BASE_ADDRESS; /* PORTE Base Address */
                     break;
            case  PORTF: PortGpio_Ptr = (volatile uint32 *)GPIO_PORTF_BASE_ADDRESS; /* PORTF Base Address */
                     break;
        }
        /* Enable clock for PORT and allow time for clock to start*/
        SYSCTL_REGCGC2_REG |= (1<<Port_ConfigPtr->Channels[pin].port_num);
        delay = SYSCTL_REGCGC2_REG;
        if( ((Port_ConfigPtr->Channels[pin].port_num == PortConf_PORTD_PIN7_PORT_NUM) && (Port_ConfigPtr->Channels[pin].pin_num == PortConf_PORTD_CHANNEL7)) || ((Port_ConfigPtr->Channels[pin].port_num == PortConf_PORTF_PIN0_PORT_NUM) && (Port_ConfigPtr->Channels[pin].pin_num == PortConf_PORTF_CHANNEL0)) ) /* PD7 or PF0 */
        {
            *(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_LOCK_REG_OFFSET) = MAGIC_NUMBER_TO_UNLOCK;                     /* Unlock the GPIOCR register */   
            SET_BIT(*(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_COMMIT_REG_OFFSET) , Port_ConfigPtr->Channels[pin].pin_num);  /* Set the corresponding bit in GPIOCR register to allow changes on this pin */
        }
        /***************************************************************************
        * No need for this step bec they are not configured
        * else if( (Port_ConfigPtr->Channels[index].port_num == 2) && (Port_ConfigPtr->Channels[index].pin_num <= 3) )  PC0 to PC3
        * {
        *    Do Nothing ...  this is the JTAG pins 
        * }
        ****************************************************************************/
        else
        {
            /* Do Nothing ... No need to unlock the commit register for this pin */
        }
    
        switch(Port_ConfigPtr->Channels[pin].pin_mode)
        {
            case PORT_PIN_MODE_DIO:
                        /* Clear the corresponding bit in the GPIOAMSEL register to disable analog functionality on this pin */
			CLEAR_BIT(*(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_ANALOG_MODE_SEL_REG_OFFSET) , Port_ConfigPtr->Channels[pin].pin_num);

			/* Disable Alternative function for this pin by clear the corresponding bit in GPIOAFSEL register */
			CLEAR_BIT(*(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_ALT_FUNC_REG_OFFSET) , Port_ConfigPtr->Channels[pin].pin_num);

			/* Clear the PMCx bits for this pin */
			*(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_CTL_REG_OFFSET) &= ~(0x0000000F << (Port_ConfigPtr->Channels[pin].pin_num * 4));

			/* Set the corresponding bit in the GPIODEN register to enable digital functionality on this pin */
			SET_BIT(*(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_DIGITAL_ENABLE_REG_OFFSET) , Port_ConfigPtr->Channels[pin].pin_num);
                        break;
            case PORT_PIN_MODE_ADC:
                        /* Clear the corresponding bit in the GPIODEN register to disable digital functionality on this pin */
			CLEAR_BIT(*(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_DIGITAL_ENABLE_REG_OFFSET) , Port_ConfigPtr->Channels[pin].pin_num);

			/* Disable Alternative function for this pin by clear the corresponding bit in GPIOAFSEL register */
			CLEAR_BIT(*(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_ALT_FUNC_REG_OFFSET) , Port_ConfigPtr->Channels[pin].pin_num);

			/* Clear the PMCx bits for this pin */
			*(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_CTL_REG_OFFSET) &= ~(0x0000000F << (Port_ConfigPtr->Channels[pin].pin_num * 4));

			/* Set the corresponding bit in the GPIOAMSEL register to enable analog functionality on this pin */
			SET_BIT(*(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_ANALOG_MODE_SEL_REG_OFFSET) , Port_ConfigPtr->Channels[pin].pin_num);
                        break;
            default:
                        /* Clear the corresponding bit in the GPIOAMSEL register to disable analog functionality on this pin */
			CLEAR_BIT(*(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_ANALOG_MODE_SEL_REG_OFFSET) , Port_ConfigPtr->Channels[pin].pin_num);

			/* Enable Alternative function for this pin by clear the corresponding bit in GPIOAFSEL register */
			SET_BIT(*(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_ALT_FUNC_REG_OFFSET) , Port_ConfigPtr->Channels[pin].pin_num);

			/* Set the PMCx bits for this pin */
			*(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_CTL_REG_OFFSET) |= (Port_ConfigPtr->Channels[pin].pin_mode & 0x0000000F << (Port_ConfigPtr->Channels[pin].pin_num * 4));

			/* Set the corresponding bit in the GPIODEN register to enable digital functionality on this pin */
			SET_BIT(*(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_DIGITAL_ENABLE_REG_OFFSET) , Port_ConfigPtr->Channels[pin].pin_num);
                        break;
        }
        
        switch(Port_ConfigPtr->Channels[pin].pin_direction)
        {
            case PORT_PIN_OUT:
                        /* Set the corresponding bit in the GPIODIR register to configure it as output pin */
			SET_BIT(*(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_DIR_REG_OFFSET) , Port_ConfigPtr->Channels[pin].pin_num);
                        if(Port_ConfigPtr->Channels[pin].pin_initial_level == PORT_PIN_LEVEL_HIGH)
                        {
                            /* Set the corresponding bit in the GPIODATA register to provide initial value 1 */
                            SET_BIT(*(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_DATA_REG_OFFSET) , Port_ConfigPtr->Channels[pin].pin_num);
                        }
                        else
                        {
                            /* Clear the corresponding bit in the GPIODATA register to provide initial value 0 */
                            CLEAR_BIT(*(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_DATA_REG_OFFSET) , Port_ConfigPtr->Channels[pin].pin_num);
                        }
                        break;
            case PORT_PIN_IN:
                        /* Clear the corresponding bit in the GPIODIR register to configure it as input pin */
			CLEAR_BIT(*(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_DIR_REG_OFFSET) , Port_ConfigPtr->Channels[pin].pin_num);
                        if(Port_ConfigPtr->Channels[pin].port_internal_res == PULL_UP)
                        {
                            /* Set the corresponding bit in the GPIOPUR register to enable the internal pull up pin */
                            SET_BIT(*(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_PULL_UP_REG_OFFSET) , Port_ConfigPtr->Channels[pin].pin_num);
                        }
                        else if(Port_ConfigPtr->Channels[pin].port_internal_res == PULL_DOWN)
                        {
                            /* Set the corresponding bit in the GPIOPDR register to enable the internal pull down pin */
                            SET_BIT(*(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_PULL_DOWN_REG_OFFSET) , Port_ConfigPtr->Channels[pin].pin_num);
                        }
                        else
                        {
                            /* Clear the corresponding bit in the GPIOPUR register to disable the internal pull up pin */
                            CLEAR_BIT(*(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_PULL_UP_REG_OFFSET) , Port_ConfigPtr->Channels[pin].pin_num);

                            /* Clear the corresponding bit in the GPIOPDR register to disable the internal pull down pin */
                            CLEAR_BIT(*(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_PULL_DOWN_REG_OFFSET) , Port_ConfigPtr->Channels[pin].pin_num);
                        }
                        break;
            default:
                        break;
        }
    }
}

/************************************************************************************
* Service Name: Port_SetPinDirection
* Sync/Async: Synchronous
* Reentrancy: reentrant
* Parameters (in): Pin - Port Pin ID number , Direction - Port Pin Direction
* Parameters (inout): None
* Parameters (out): None
* Return value: None
* Description: Function to Sets the port pin direction.
************************************************************************************/
void Port_SetPinDirection(Port_PinType Pin, Port_PinDirectionType Direction)
{

    volatile uint32 * PortGpio_Ptr = NULL_PTR; /* point to the required Port Registers base address */
    
    switch(Port_ConfigPtr->Channels[Pin].port_num)
    {
        case  PORTA: PortGpio_Ptr = (volatile uint32 *)GPIO_PORTA_BASE_ADDRESS; /* PORTA Base Address */
               break;
        case  PORTB: PortGpio_Ptr = (volatile uint32 *)GPIO_PORTB_BASE_ADDRESS; /* PORTB Base Address */
               break;
        case  PORTC: PortGpio_Ptr = (volatile uint32 *)GPIO_PORTC_BASE_ADDRESS; /* PORTC Base Address */
               break;
        case  PORTD: PortGpio_Ptr = (volatile uint32 *)GPIO_PORTD_BASE_ADDRESS; /* PORTD Base Address */
               break;
        case  PORTE: PortGpio_Ptr = (volatile uint32 *)GPIO_PORTE_BASE_ADDRESS; /* PORTE Base Address */
               break;
        case  PORTF: PortGpio_Ptr = (volatile uint32 *)GPIO_PORTF_BASE_ADDRESS; /* PORTF Base Address */
               break;
    }
    if(Direction == PORT_PIN_OUT)
    {
        /* Set the corresponding bit in the GPIODIR register to configure it as output pin */
	SET_BIT(*(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_DIR_REG_OFFSET) , Port_ConfigPtr->Channels[Pin].pin_num);
    }
    else if(Direction == PORT_PIN_IN)
    {
	/* Clear the corresponding bit in the GPIODIR register to configure it as input pin */
	CLEAR_BIT(*(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_DIR_REG_OFFSET) , Port_ConfigPtr->Channels[Pin].pin_num);
    }
    else
    {	/* Do Nothing */	}
}

/************************************************************************************
* Service Name: Port_RefreshPortDirection
* Sync/Async: Synchronous
* Reentrancy: Non reentrant
* Parameters (in): None
* Parameters (inout): None
* Parameters (out): None
* Return value: None
* Description: Refreshes port direction.
************************************************************************************/
void Port_RefreshPortDirection(void)
{
        
    for(Port_PinType pin = ZERO; pin < PORT_CONFIGURED_CHANNLES; pin++){
      
        volatile uint32 * PortGpio_Ptr = NULL_PTR; /* point to the required Port Registers base address */
    
        switch(Port_ConfigPtr->Channels[pin].port_num)
        {
            case  PORTA: PortGpio_Ptr = (volatile uint32 *)GPIO_PORTA_BASE_ADDRESS; /* PORTA Base Address */
                    break;
            case  PORTB: PortGpio_Ptr = (volatile uint32 *)GPIO_PORTB_BASE_ADDRESS; /* PORTB Base Address */
                    break;
            case  PORTC: PortGpio_Ptr = (volatile uint32 *)GPIO_PORTC_BASE_ADDRESS; /* PORTC Base Address */
                     break;
            case  PORTD: PortGpio_Ptr = (volatile uint32 *)GPIO_PORTD_BASE_ADDRESS; /* PORTD Base Address */
                     break;
            case  PORTE: PortGpio_Ptr = (volatile uint32 *)GPIO_PORTE_BASE_ADDRESS; /* PORTE Base Address */
                     break;
            case  PORTF: PortGpio_Ptr = (volatile uint32 *)GPIO_PORTF_BASE_ADDRESS; /* PORTF Base Address */
                     break;
        }
        
        if (Port_ConfigPtr->Channels[pin].pin_direction_changeable == STD_OFF)
	{
		if(Port_ConfigPtr->Channels[pin].pin_direction == PORT_PIN_OUT)
		{
			/* Set the corresponding bit in the GPIODIR register to configure it as output pin */
			SET_BIT(*(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_DIR_REG_OFFSET) , Port_ConfigPtr->Channels[pin].pin_num);
		}
		else if(Port_ConfigPtr->Channels[pin].pin_direction == PORT_PIN_IN)
		{
			/* Clear the corresponding bit in the GPIODIR register to configure it as input pin */
			CLEAR_BIT(*(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_DIR_REG_OFFSET) , Port_ConfigPtr->Channels[pin].pin_num);
		}
		else
		{	/* Do Nothing */	}
	}
	else
	{	/* Do Nothing */	}
    }
}

/************************************************************************************
* Service Name: Port_SetPinMode
* Sync/Async: Synchronous
* Reentrancy: reentrant
* Parameters (in): Pin - Port Pin ID number, Mode - New Port Pin mode to be set on port pin
* Parameters (inout): None
* Parameters (out): None
* Return value: None
* Description: Sets the port pin mode.
************************************************************************************/
void Port_SetPinMode(Port_PinType Pin, Port_PinModeType Mode)
{
	
        volatile uint32 * PortGpio_Ptr = NULL_PTR; /* point to the required Port Registers base address */
    
        switch(Port_ConfigPtr->Channels[Pin].port_num)
        {
            case  PORTA: PortGpio_Ptr = (volatile uint32 *)GPIO_PORTA_BASE_ADDRESS; /* PORTA Base Address */
                    break;
            case  PORTB: PortGpio_Ptr = (volatile uint32 *)GPIO_PORTB_BASE_ADDRESS; /* PORTB Base Address */
                    break;
            case  PORTC: PortGpio_Ptr = (volatile uint32 *)GPIO_PORTC_BASE_ADDRESS; /* PORTC Base Address */
                     break;
            case  PORTD: PortGpio_Ptr = (volatile uint32 *)GPIO_PORTD_BASE_ADDRESS; /* PORTD Base Address */
                     break;
            case  PORTE: PortGpio_Ptr = (volatile uint32 *)GPIO_PORTE_BASE_ADDRESS; /* PORTE Base Address */
                     break;
            case  PORTF: PortGpio_Ptr = (volatile uint32 *)GPIO_PORTF_BASE_ADDRESS; /* PORTF Base Address */
                     break;
        }
        switch(Port_ConfigPtr->Channels[Pin].pin_mode)
        {
            case PORT_PIN_MODE_DIO:
                        /* Clear the corresponding bit in the GPIOAMSEL register to disable analog functionality on this pin */
			CLEAR_BIT(*(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_ANALOG_MODE_SEL_REG_OFFSET) , Port_ConfigPtr->Channels[Pin].pin_num);

			/* Disable Alternative function for this pin by clear the corresponding bit in GPIOAFSEL register */
			CLEAR_BIT(*(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_ALT_FUNC_REG_OFFSET) , Port_ConfigPtr->Channels[Pin].pin_num);

			/* Clear the PMCx bits for this pin */
			*(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_CTL_REG_OFFSET) &= ~(0x0000000F << (Port_ConfigPtr->Channels[Pin].pin_num * 4));

			/* Set the corresponding bit in the GPIODEN register to enable digital functionality on this pin */
			SET_BIT(*(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_DIGITAL_ENABLE_REG_OFFSET) , Port_ConfigPtr->Channels[Pin].pin_num);
                        break;
            case PORT_PIN_MODE_ADC:
                        /* Clear the corresponding bit in the GPIODEN register to disable digital functionality on this pin */
			CLEAR_BIT(*(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_DIGITAL_ENABLE_REG_OFFSET) , Port_ConfigPtr->Channels[Pin].pin_num);

			/* Disable Alternative function for this pin by clear the corresponding bit in GPIOAFSEL register */
			CLEAR_BIT(*(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_ALT_FUNC_REG_OFFSET) , Port_ConfigPtr->Channels[Pin].pin_num);

			/* Clear the PMCx bits for this pin */
			*(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_CTL_REG_OFFSET) &= ~(0x0000000F << (Port_ConfigPtr->Channels[Pin].pin_num * 4));

			/* Set the corresponding bit in the GPIOAMSEL register to enable analog functionality on this pin */
			SET_BIT(*(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_ANALOG_MODE_SEL_REG_OFFSET) , Port_ConfigPtr->Channels[Pin].pin_num);
                        break;
            default:
                        /* Clear the corresponding bit in the GPIOAMSEL register to disable analog functionality on this pin */
			CLEAR_BIT(*(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_ANALOG_MODE_SEL_REG_OFFSET) , Port_ConfigPtr->Channels[Pin].pin_num);

			/* Enable Alternative function for this pin by clear the corresponding bit in GPIOAFSEL register */
			SET_BIT(*(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_ALT_FUNC_REG_OFFSET) , Port_ConfigPtr->Channels[Pin].pin_num);

			/* Set the PMCx bits for this pin */
			*(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_CTL_REG_OFFSET) |= (Port_ConfigPtr->Channels[Pin].pin_mode & 0x0000000F << (Port_ConfigPtr->Channels[Pin].pin_num * 4));

			/* Set the corresponding bit in the GPIODEN register to enable digital functionality on this pin */
			SET_BIT(*(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_DIGITAL_ENABLE_REG_OFFSET) , Port_ConfigPtr->Channels[Pin].pin_num);
                        break;
        }
}