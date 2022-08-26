 /******************************************************************************
 *
 * Module: Port
 *
 * File Name: Port.h
 *
 * Description: Header file for TM4C123GH6PM Microcontroller - Port Driver.
 *
 * Author: Ahmed Ehab
 ******************************************************************************/

#ifndef PORT_H
#define PORT_H

/*
 * Macros for Port Status
 */
#define PORT_INITIALIZED                (1U)
#define PORT_NOT_INITIALIZED            (0U)

/* Standard types */
#include "Std_Types.h"

/* Dio Pre-Compile Configuration Header file */
#include "Port_Cfg.h"

#include "Common_Macros.h"

/*******************************************************************************
 *                              Module Data Types                              *
 *******************************************************************************/
 /* Data type for the symbolic name of a port pin */
typedef uint8 Port_PinType;

/* Data type for the symbolic name of a port */
typedef uint8 Port_PortType;


/* Direction can be changed or not */
typedef uint8 Port_PinDirectionChangeable;

/* Mode can be changed or not */
typedef uint8 Port_PinModeChangeable;

/* Possible directions of a port pin */
typedef enum
{
	PORT_PIN_IN,
	PORT_PIN_OUT
}Port_PinDirectionType;

/* Port Pin Level value from Port pin list */
typedef enum
{
	PORT_PIN_LEVEL_LOW,
	PORT_PIN_LEVEL_HIGH
}Port_PinInitialLevelValue;

/* Enum to hold internal resistor type for PIN */
typedef enum
{
    OFF,
	PULL_UP,
	PULL_DOWN
}Port_InternalResistor;

/* Port pin mode from mode list for use with Port_Init() function */
typedef enum
{
	PORT_PIN_MODE_ADC,
	PORT_PIN_MODE_ALT1,
	PORT_PIN_MODE_ALT2,
	PORT_PIN_MODE_ALT3,
	PORT_PIN_MODE_ALT4,
	PORT_PIN_MODE_ALT5,
	PORT_PIN_MODE_ALT6,
	PORT_PIN_MODE_ALT7,
	PORT_PIN_MODE_ALT8,
	PORT_PIN_MODE_ALT9,
	PORT_PIN_MODE_DIO,
}Port_PinModeType;

/* Structure to confg each individual pin */
typedef struct {
	Port_PortType port_num;
	Port_PinType pin_num;
	Port_PinDirectionType pin_direction;
        Port_InternalResistor port_internal_res;
        Port_PinInitialLevelValue pin_initial_level;
        Port_PinModeType pin_mode;
	Port_PinDirectionChangeable pin_direction_changeable;
	Port_PinModeChangeable pin_mode_changeable;
} Port_ConfigChannel;

/* Type of the external data structure containing the initialization values */
typedef struct {
	Port_ConfigChannel Channels[PORT_CONFIGURED_CHANNLES];
} Port_ConfigType;

/*******************************************************************************
 *                      Function Prototypes                                    *
 *******************************************************************************/

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
void Port_Init(const Port_ConfigType* ConfigPtr);

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
void Port_SetPinDirection(Port_PinType Pin, Port_PinDirectionType Direction);

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
void Port_RefreshPortDirection(void);

/************************************************************************************
* Service Name: Port_SetPinMode
* Service ID[hex]: 0x04
* Sync/Async: Synchronous
* Reentrancy: reentrant
* Parameters (in): Pin - Port Pin ID number, Mode - New Port Pin mode to be set on port pin
* Parameters (inout): None
* Parameters (out): None
* Return value: None
* Description: Sets the port pin mode.
************************************************************************************/
void Port_SetPinMode(Port_PinType Pin, Port_PinModeType Mode);

/*******************************************************************************
 *                       External Variables                                    *
 *******************************************************************************/

/* Extern PB structures to be used by Port and other modules */
extern const Port_ConfigType Port_Configuration;

#endif /* PORT_H */