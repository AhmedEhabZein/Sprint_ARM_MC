 /******************************************************************************
 *
 * Module: NVIC
 *
 * File Name: NVIC.h
 *
 * Description: Header file for TM4C123GH6PM Microcontroller - NVIC Driver
 *
 * Author: Ahmed Ehab
 ******************************************************************************/

#ifndef NVIC_H
#define NVIC_H

/* Standard types */
#include "Std_Types.h"

/* Dio Pre-Compile Configuration Header file */
#include "NVIC_Cfg.h"

#include "Common_Macros.h"

/*******************************************************************************
*  							MACROS                                             *
********************************************************************************/
/* Enable Exceptions ... This Macro enable IRQ interrupts by clearing the I-bit in the PRIMASK. */
#define Enable_Exceptions()    __asm("CPSIE I")

/* Disable Exceptions ... This Macro disable IRQ interrupts by clearing the I-bit in the PRIMASK. */
#define Disable_Exceptions()   __asm("CPSID I")

#define SYSTICK_PRIORITY_MASK  0x1FFFFFFF
#define SYSTICK_PRIORITY_BITS_POS   29


/*******************************************************************************
 *                              Module Data Types                              *
 *******************************************************************************/

/* Type definition for IntCtrl_InterruptType used by the IntCtrl APIs */
typedef enum
{
	SYSTICK=15,
	GPIO_PORT_A,
	GPIO_PORT_B,
	GPIO_PORT_C,
	GPIO_PORT_D,
	GPIO_PORT_E /* And so on... */
}IntCtrl_InterruptType;

typedef struct
{
	/* Contains the interrupt type */
	IntCtrl_InterruptType PeripheralType;
	/* Contains the priority of the group*/
    uint8 InterruptGroupPriority;
	/* Contains the priority of the sub-group*/
    uint8 InterruptSubGroupPriority; 
}IntCtrl_ConfigChannel;

/* Data Structure required for initializing the NVIC Driver */
typedef struct IntCtrl_ConfigType
{
	NVIC_ConfigChannel Channels[NVIC_CONFIGURED_INTERRUPTS];
} IntCtrl_ConfigType;

/*******************************************************************************
 *                      Function Prototypes                                    *
 *******************************************************************************/

void NVIC_Init(const IntCtrl_ConfigType * ConfigPtr);

/*******************************************************************************
 *                       External Variables                                    *
 *******************************************************************************/

/* Extern PB structures to be used by NVIC */
extern const IntCtrl_ConfigType NVIC_Configuration;

#endif /* NVIC_H */
