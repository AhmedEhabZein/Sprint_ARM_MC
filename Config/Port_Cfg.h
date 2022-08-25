 /******************************************************************************
 *
 * Module: Port
 *
 * File Name: Port_Cfg.h
 *
 * Description: Pre-Compile Configuration Header file for TM4C123GH6PM Microcontroller - Port Driver
 *
 * Author: Ahmed Ehab
 ******************************************************************************/

#ifndef PORT_CFG_H
#define PORT_CFG_H

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

/* Number of the configured Port Channels */
#define PORT_CONFIGURED_CHANNLES              (39U)

/* Channel Index in the array of structures in Port_PBcfg.c */
/*Port A */
#define PortConf_PORTA_CHANNEL0_ID_INDEX        (uint8)0x00
#define PortConf_PORTA_CHANNEL1_ID_INDEX        (uint8)0x01
#define PortConf_PORTA_CHANNEL2_ID_INDEX        (uint8)0x02
#define PortConf_PORTA_CHANNEL3_ID_INDEX        (uint8)0x03
#define PortConf_PORTA_CHANNEL4_ID_INDEX        (uint8)0x04
#define PortConf_PORTA_CHANNEL5_ID_INDEX        (uint8)0x05
#define PortConf_PORTA_CHANNEL6_ID_INDEX        (uint8)0x06
#define PortConf_PORTA_CHANNEL7_ID_INDEX        (uint8)0x07
/*Port B */
#define PortConf_PORTB_CHANNEL0_ID_INDEX        (uint8)0x08
#define PortConf_PORTB_CHANNEL1_ID_INDEX        (uint8)0x09
#define PortConf_PORTB_CHANNEL2_ID_INDEX        (uint8)0x10
#define PortConf_PORTB_CHANNEL3_ID_INDEX        (uint8)0x11
#define PortConf_PORTB_CHANNEL4_ID_INDEX        (uint8)0x12
#define PortConf_PORTB_CHANNEL5_ID_INDEX        (uint8)0x13
#define PortConf_PORTB_CHANNEL6_ID_INDEX        (uint8)0x14
#define PortConf_PORTB_CHANNEL7_ID_INDEX        (uint8)0x15
/*Port C */
#define PortConf_PORTC_CHANNEL4_ID_INDEX        (uint8)0x16
#define PortConf_PORTC_CHANNEL5_ID_INDEX        (uint8)0x17
#define PortConf_PORTC_CHANNEL6_ID_INDEX        (uint8)0x18
#define PortConf_PORTC_CHANNEL7_ID_INDEX        (uint8)0x19
/*Port D */
#define PortConf_PORTD_CHANNEL0_ID_INDEX        (uint8)0x20
#define PortConf_PORTD_CHANNEL1_ID_INDEX        (uint8)0x21
#define PortConf_PORTD_CHANNEL2_ID_INDEX        (uint8)0x22
#define PortConf_PORTD_CHANNEL3_ID_INDEX        (uint8)0x23
#define PortConf_PORTD_CHANNEL4_ID_INDEX        (uint8)0x24
#define PortConf_PORTD_CHANNEL5_ID_INDEX        (uint8)0x25
#define PortConf_PORTD_CHANNEL6_ID_INDEX        (uint8)0x26
#define PortConf_PORTD_CHANNEL7_ID_INDEX        (uint8)0x27
/*Port E*/
#define PortConf_PORTE_CHANNEL0_ID_INDEX        (uint8)0x28
#define PortConf_PORTE_CHANNEL1_ID_INDEX        (uint8)0x29
#define PortConf_PORTE_CHANNEL2_ID_INDEX        (uint8)0x30
#define PortConf_PORTE_CHANNEL3_ID_INDEX        (uint8)0x31
#define PortConf_PORTE_CHANNEL4_ID_INDEX        (uint8)0x32
#define PortConf_PORTE_CHANNEL5_ID_INDEX        (uint8)0x33
/*Port F */
#define PortConf_PORTF_CHANNEL0_ID_INDEX        (uint8)0x34
#define PortConf_PORTF_CHANNEL1_ID_INDEX        (uint8)0x35
#define PortConf_PORTF_CHANNEL2_ID_INDEX        (uint8)0x36
#define PortConf_PORTF_CHANNEL3_ID_INDEX        (uint8)0x37
#define PortConf_PORTF_CHANNEL4_ID_INDEX        (uint8)0x38

/* Port Configuration*/
#define PORTA           (Port_PortType)0
#define PORTB           (Port_PortType)1
#define PORTC           (Port_PortType)2
#define PORTD           (Port_PortType)3
#define PORTE           (Port_PortType)4
#define PORTF           (Port_PortType)5

   
/* PORT Configured Port ID's  */
#define PortConf_PORTA_PIN0_PORT_NUM                PORTA /* PORTA */
#define PortConf_PORTA_PIN1_PORT_NUM                PORTA /* PORTA */
#define PortConf_PORTA_PIN2_PORT_NUM                PORTA /* PORTA */
#define PortConf_PORTA_PIN3_PORT_NUM                PORTA /* PORTA */
#define PortConf_PORTA_PIN4_PORT_NUM                PORTA /* PORTA */
#define PortConf_PORTA_PIN5_PORT_NUM                PORTA /* PORTA */
#define PortConf_PORTA_PIN6_PORT_NUM                PORTA /* PORTA */
#define PortConf_PORTA_PIN7_PORT_NUM                PORTA /* PORTA */

#define PortConf_PORTB_PIN0_PORT_NUM                PORTB /* PORTB */
#define PortConf_PORTB_PIN1_PORT_NUM                PORTB /* PORTB */
#define PortConf_PORTB_PIN2_PORT_NUM                PORTB /* PORTB */
#define PortConf_PORTB_PIN3_PORT_NUM                PORTB /* PORTB */
#define PortConf_PORTB_PIN4_PORT_NUM                PORTB /* PORTB */
#define PortConf_PORTB_PIN5_PORT_NUM                PORTB /* PORTB */
#define PortConf_PORTB_PIN6_PORT_NUM                PORTB /* PORTB */
#define PortConf_PORTB_PIN7_PORT_NUM                PORTB /* PORTB */

#define PortConf_PORTC_PIN4_PORT_NUM                PORTC /* PORTC */
#define PortConf_PORTC_PIN5_PORT_NUM                PORTC /* PORTC */
#define PortConf_PORTC_PIN6_PORT_NUM                PORTC /* PORTC */
#define PortConf_PORTC_PIN7_PORT_NUM                PORTC /* PORTC */

#define PortConf_PORTD_PIN0_PORT_NUM                PORTD /* PORTD */
#define PortConf_PORTD_PIN1_PORT_NUM                PORTD /* PORTD */
#define PortConf_PORTD_PIN2_PORT_NUM                PORTD /* PORTD */
#define PortConf_PORTD_PIN3_PORT_NUM                PORTD /* PORTD */
#define PortConf_PORTD_PIN4_PORT_NUM                PORTD /* PORTD */
#define PortConf_PORTD_PIN5_PORT_NUM                PORTD /* PORTD */
#define PortConf_PORTD_PIN6_PORT_NUM                PORTD /* PORTD */
#define PortConf_PORTD_PIN7_PORT_NUM                PORTD /* PORTD */

#define PortConf_PORTE_PIN0_PORT_NUM                PORTE /* PORTE */
#define PortConf_PORTE_PIN1_PORT_NUM                PORTE /* PORTE */
#define PortConf_PORTE_PIN2_PORT_NUM                PORTE /* PORTE */
#define PortConf_PORTE_PIN3_PORT_NUM                PORTE /* PORTE */
#define PortConf_PORTE_PIN4_PORT_NUM                PORTE /* PORTE */
#define PortConf_PORTE_PIN5_PORT_NUM                PORTE /* PORTE */

#define PortConf_PORTF_PIN0_PORT_NUM                PORTF /* PORTF */
#define PortConf_PORTF_PIN1_PORT_NUM                PORTF /* PORTF */
#define PortConf_PORTF_PIN2_PORT_NUM                PORTF /* PORTF */
#define PortConf_PORTF_PIN3_PORT_NUM                PORTF /* PORTF */
#define PortConf_PORTF_PIN4_PORT_NUM                PORTF /* PORTF */



/* PORT Configured Channel ID's */
#define PortConf_PORTA_CHANNEL0             (Port_PinType)0 /* Pin 1 in PORTA */
#define PortConf_PORTA_CHANNEL1             (Port_PinType)1 /* Pin 2 in PORTA */
#define PortConf_PORTA_CHANNEL2             (Port_PinType)2 /* Pin 3 in PORTA */
#define PortConf_PORTA_CHANNEL3             (Port_PinType)3 /* Pin 4 in PORTA */
#define PortConf_PORTA_CHANNEL4             (Port_PinType)4 /* Pin 5 in PORTA */
#define PortConf_PORTA_CHANNEL5             (Port_PinType)5 /* Pin 6 in PORTA */
#define PortConf_PORTA_CHANNEL6             (Port_PinType)6 /* Pin 7 in PORTA */
#define PortConf_PORTA_CHANNEL7             (Port_PinType)7 /* Pin 8 in PORTA */

#define PortConf_PORTB_CHANNEL0             (Port_PinType)0 /* Pin 1 in PORTB */
#define PortConf_PORTB_CHANNEL1             (Port_PinType)1 /* Pin 2 in PORTB */
#define PortConf_PORTB_CHANNEL2             (Port_PinType)2 /* Pin 3 in PORTB */
#define PortConf_PORTB_CHANNEL3             (Port_PinType)3 /* Pin 4 in PORTB */
#define PortConf_PORTB_CHANNEL4             (Port_PinType)4 /* Pin 5 in PORTB */
#define PortConf_PORTB_CHANNEL5             (Port_PinType)5 /* Pin 6 in PORTB */
#define PortConf_PORTB_CHANNEL6             (Port_PinType)6 /* Pin 7 in PORTB */
#define PortConf_PORTB_CHANNEL7             (Port_PinType)7 /* Pin 8 in PORTB */

#define PortConf_PORTC_CHANNEL4             (Port_PinType)4 /* Pin 5 in PORTc */
#define PortConf_PORTC_CHANNEL5             (Port_PinType)5 /* Pin 6 in PORTC */
#define PortConf_PORTC_CHANNEL6             (Port_PinType)6 /* Pin 7 in PORTC */
#define PortConf_PORTC_CHANNEL7             (Port_PinType)7 /* Pin 8 in PORTC */

#define PortConf_PORTD_CHANNEL0             (Port_PinType)0 /* Pin 1 in PORTD */
#define PortConf_PORTD_CHANNEL1             (Port_PinType)1 /* Pin 2 in PORTD */
#define PortConf_PORTD_CHANNEL2             (Port_PinType)2 /* Pin 3 in PORTD */
#define PortConf_PORTD_CHANNEL3             (Port_PinType)3 /* Pin 4 in PORTD */
#define PortConf_PORTD_CHANNEL4             (Port_PinType)4 /* Pin 5 in PORTD */
#define PortConf_PORTD_CHANNEL5             (Port_PinType)5 /* Pin 6 in PORTD */
#define PortConf_PORTD_CHANNEL6             (Port_PinType)6 /* Pin 7 in PORTD */
#define PortConf_PORTD_CHANNEL7             (Port_PinType)7 /* Pin 8 in PORTD */

#define PortConf_PORTE_CHANNEL0             (Port_PinType)0 /* Pin 1 in PORTE */
#define PortConf_PORTE_CHANNEL1             (Port_PinType)1 /* Pin 2 in PORTE */
#define PortConf_PORTE_CHANNEL2             (Port_PinType)2 /* Pin 3 in PORTE */
#define PortConf_PORTE_CHANNEL3             (Port_PinType)3 /* Pin 4 in PORTE */
#define PortConf_PORTE_CHANNEL4             (Port_PinType)4 /* Pin 5 in PORTE */
#define PortConf_PORTE_CHANNEL5             (Port_PinType)5 /* Pin 6 in PORTE */

#define PortConf_PORTF_CHANNEL0             (Port_PinType)0 /* Pin 1 in PORTF */
#define PortConf_PORTF_CHANNEL1             (Port_PinType)1 /* Pin 2 in PORTF */
#define PortConf_PORTF_CHANNEL2             (Port_PinType)2 /* Pin 3 in PORTF */
#define PortConf_PORTF_CHANNEL3             (Port_PinType)3 /* Pin 4 in PORTF */
#define PortConf_PORTF_CHANNEL4             (Port_PinType)4 /* Pin 5 in PORTF */

/*******************************************************************************
 *                    PINS DIRECTION CONFIGURATIONS                            *
 *******************************************************************************/
#define PORTA_PIN0_DIRECTION					   PORT_PIN_IN
#define PORTA_PIN1_DIRECTION			           PORT_PIN_IN
#define PORTA_PIN2_DIRECTION					   PORT_PIN_IN
#define PORTA_PIN3_DIRECTION					   PORT_PIN_IN
#define PORTA_PIN4_DIRECTION					   PORT_PIN_IN
#define PORTA_PIN5_DIRECTION			      	   PORT_PIN_IN
#define PORTA_PIN6_DIRECTION					   PORT_PIN_IN
#define PORTA_PIN7_DIRECTION					   PORT_PIN_IN

#define PORTB_PIN0_DIRECTION			   		   PORT_PIN_IN
#define PORTB_PIN1_DIRECTION					   PORT_PIN_IN
#define PORTB_PIN2_DIRECTION					   PORT_PIN_IN
#define PORTB_PIN3_DIRECTION					   PORT_PIN_IN
#define PORTB_PIN4_DIRECTION					   PORT_PIN_IN
#define PORTB_PIN5_DIRECTION					   PORT_PIN_IN
#define PORTB_PIN6_DIRECTION					   PORT_PIN_IN
#define PORTB_PIN7_DIRECTION					   PORT_PIN_IN

#define PORTC_PIN4_DIRECTION					   PORT_PIN_IN
#define PORTC_PIN5_DIRECTION					   PORT_PIN_IN	
#define PORTC_PIN6_DIRECTION					   PORT_PIN_IN
#define PORTC_PIN7_DIRECTION					   PORT_PIN_IN

#define PORTD_PIN0_DIRECTION					   PORT_PIN_IN
#define PORTD_PIN1_DIRECTION					   PORT_PIN_IN
#define PORTD_PIN2_DIRECTION					   PORT_PIN_IN	
#define PORTD_PIN3_DIRECTION				       PORT_PIN_IN
#define PORTD_PIN4_DIRECTION					   PORT_PIN_IN
#define PORTD_PIN5_DIRECTION					   PORT_PIN_IN
#define PORTD_PIN6_DIRECTION					   PORT_PIN_IN
#define PORTD_PIN7_DIRECTION					   PORT_PIN_IN  /*LOCKED*/

#define PORTE_PIN0_DIRECTION					   PORT_PIN_IN
#define PORTE_PIN1_DIRECTION					   PORT_PIN_IN
#define PORTE_PIN2_DIRECTION					   PORT_PIN_IN
#define PORTE_PIN3_DIRECTION					   PORT_PIN_IN
#define PORTE_PIN4_DIRECTION					   PORT_PIN_IN
#define PORTE_PIN5_DIRECTION					   PORT_PIN_IN	

#define PORTF_PIN0_DIRECTION					   PORT_PIN_IN  /*LOCKED*/
#define PORTF_PIN1_DIRECTION					   PORT_PIN_OUT
#define PORTF_PIN2_DIRECTION					   PORT_PIN_OUT	
#define PORTF_PIN3_DIRECTION					   PORT_PIN_OUT
#define PORTF_PIN4_DIRECTION					   PORT_PIN_IN

/*******************************************************************************
 *                    PINS DIRECTION CHANGEABILITY CONFIGURATIONS                            *
 *******************************************************************************/
#define PORTA_PIN0_DIRECTION_CHANGEABLE				       STD_OFF
#define PORTA_PIN1_DIRECTION_CHANGEABLE				       STD_OFF
#define PORTA_PIN2_DIRECTION_CHANGEABLE				       STD_OFF
#define PORTA_PIN3_DIRECTION_CHANGEABLE				       STD_OFF
#define PORTA_PIN4_DIRECTION_CHANGEABLE				       STD_OFF
#define PORTA_PIN5_DIRECTION_CHANGEABLE				       STD_OFF
#define PORTA_PIN6_DIRECTION_CHANGEABLE				       STD_OFF
#define PORTA_PIN7_DIRECTION_CHANGEABLE				       STD_OFF

#define PORTB_PIN0_DIRECTION_CHANGEABLE				       STD_OFF
#define PORTB_PIN1_DIRECTION_CHANGEABLE				       STD_OFF
#define PORTB_PIN2_DIRECTION_CHANGEABLE				       STD_OFF
#define PORTB_PIN3_DIRECTION_CHANGEABLE				       STD_OFF
#define PORTB_PIN4_DIRECTION_CHANGEABLE				       STD_OFF
#define PORTB_PIN5_DIRECTION_CHANGEABLE				       STD_OFF
#define PORTB_PIN6_DIRECTION_CHANGEABLE				       STD_OFF
#define PORTB_PIN7_DIRECTION_CHANGEABLE				       STD_OFF

#define PORTC_PIN4_DIRECTION_CHANGEABLE				       STD_OFF
#define PORTC_PIN5_DIRECTION_CHANGEABLE				       STD_OFF	
#define PORTC_PIN6_DIRECTION_CHANGEABLE				       STD_OFF
#define PORTC_PIN7_DIRECTION_CHANGEABLE				       STD_OFF

#define PORTD_PIN0_DIRECTION_CHANGEABLE				       STD_OFF
#define PORTD_PIN1_DIRECTION_CHANGEABLE				       STD_OFF
#define PORTD_PIN2_DIRECTION_CHANGEABLE				       STD_OFF	
#define PORTD_PIN3_DIRECTION_CHANGEABLE				       STD_OFF
#define PORTD_PIN4_DIRECTION_CHANGEABLE				       STD_OFF
#define PORTD_PIN5_DIRECTION_CHANGEABLE				       STD_OFF
#define PORTD_PIN6_DIRECTION_CHANGEABLE				       STD_OFF
#define PORTD_PIN7_DIRECTION_CHANGEABLE				       STD_OFF  /*LOCKED*/

#define PORTE_PIN0_DIRECTION_CHANGEABLE				       STD_OFF
#define PORTE_PIN1_DIRECTION_CHANGEABLE				       STD_OFF
#define PORTE_PIN2_DIRECTION_CHANGEABLE				       STD_OFF
#define PORTE_PIN3_DIRECTION_CHANGEABLE				       STD_OFF
#define PORTE_PIN4_DIRECTION_CHANGEABLE				       STD_OFF
#define PORTE_PIN5_DIRECTION_CHANGEABLE				       STD_OFF	

#define PORTF_PIN0_DIRECTION_CHANGEABLE				       STD_OFF  /*LOCKED*/
#define PORTF_PIN1_DIRECTION_CHANGEABLE				       STD_OFF
#define PORTF_PIN2_DIRECTION_CHANGEABLE				       STD_OFF	
#define PORTF_PIN3_DIRECTION_CHANGEABLE				       STD_OFF
#define PORTF_PIN4_DIRECTION_CHANGEABLE				       STD_OFF

/*******************************************************************************
 *            PINS INTERNAL RESISTOR CONFIGURATIONS                    *
 *******************************************************************************/
#define PORTA_PIN0_INTERNAL_RES				       OFF
#define PORTA_PIN1_INTERNAL_RES				       OFF
#define PORTA_PIN2_INTERNAL_RES				       OFF
#define PORTA_PIN3_INTERNAL_RES				       OFF
#define PORTA_PIN4_INTERNAL_RES				       OFF
#define PORTA_PIN5_INTERNAL_RES				       OFF
#define PORTA_PIN6_INTERNAL_RES				       OFF
#define PORTA_PIN7_INTERNAL_RES				       OFF

#define PORTB_PIN0_INTERNAL_RES				       OFF
#define PORTB_PIN1_INTERNAL_RES				       OFF
#define PORTB_PIN2_INTERNAL_RES				       OFF
#define PORTB_PIN3_INTERNAL_RES				       OFF
#define PORTB_PIN4_INTERNAL_RES				       OFF
#define PORTB_PIN5_INTERNAL_RES				       OFF
#define PORTB_PIN6_INTERNAL_RES				       OFF
#define PORTB_PIN7_INTERNAL_RES		     		   OFF

#define PORTC_PIN4_INTERNAL_RES				       OFF
#define PORTC_PIN5_INTERNAL_RES				       OFF
#define PORTC_PIN6_INTERNAL_RES				       OFF
#define PORTC_PIN7_INTERNAL_RES				       OFF

#define PORTD_PIN0_INTERNAL_RES				       OFF
#define PORTD_PIN1_INTERNAL_RES				       OFF
#define PORTD_PIN2_INTERNAL_RES				       OFF
#define PORTD_PIN3_INTERNAL_RES				       OFF
#define PORTD_PIN4_INTERNAL_RES				       OFF
#define PORTD_PIN5_INTERNAL_RES				       OFF
#define PORTD_PIN6_INTERNAL_RES				       OFF
#define PORTD_PIN7_INTERNAL_RES				       OFF /*LOCKED*/

#define PORTE_PIN0_INTERNAL_RES				       OFF
#define PORTE_PIN1_INTERNAL_RES				       OFF
#define PORTE_PIN2_INTERNAL_RES				       OFF
#define PORTE_PIN3_INTERNAL_RES				       OFF
#define PORTE_PIN4_INTERNAL_RES				       OFF
#define PORTE_PIN5_INTERNAL_RES				       OFF

#define PORTF_PIN0_INTERNAL_RES				       PULL_UP /*LOCKED*/
#define PORTF_PIN1_INTERNAL_RES				       OFF
#define PORTF_PIN2_INTERNAL_RES				       OFF
#define PORTF_PIN3_INTERNAL_RES				       OFF
#define PORTF_PIN4_INTERNAL_RES				       PULL_UP

/*******************************************************************************
 *              PINS INTERNAL INITIAL LEVEL CONFIGURATIONS                     *
 *******************************************************************************/
#define PORTA_PIN0_INITIAL_LEVEL			           STD_LOW
#define PORTA_PIN1_INITIAL_LEVEL				       STD_LOW
#define PORTA_PIN2_INITIAL_LEVEL				       STD_LOW
#define PORTA_PIN3_INITIAL_LEVEL				       STD_LOW
#define PORTA_PIN4_INITIAL_LEVEL				       STD_LOW
#define PORTA_PIN5_INITIAL_LEVEL				       STD_LOW
#define PORTA_PIN6_INITIAL_LEVEL				       STD_LOW
#define PORTA_PIN7_INITIAL_LEVEL				       STD_LOW

#define PORTB_PIN0_INITIAL_LEVEL				       STD_LOW
#define PORTB_PIN1_INITIAL_LEVEL				       STD_LOW
#define PORTB_PIN2_INITIAL_LEVEL				       STD_LOW
#define PORTB_PIN3_INITIAL_LEVEL				       STD_LOW
#define PORTB_PIN4_INITIAL_LEVEL				       STD_LOW
#define PORTB_PIN5_INITIAL_LEVEL				       STD_LOW
#define PORTB_PIN6_INITIAL_LEVEL				       STD_LOW
#define PORTB_PIN7_INITIAL_LEVEL				       STD_LOW

#define PORTC_PIN4_INITIAL_LEVEL				       STD_LOW
#define PORTC_PIN5_INITIAL_LEVEL				       STD_LOW
#define PORTC_PIN6_INITIAL_LEVEL				       STD_LOW
#define PORTC_PIN7_INITIAL_LEVEL				       STD_LOW

#define PORTD_PIN0_INITIAL_LEVEL				       STD_LOW
#define PORTD_PIN1_INITIAL_LEVEL				       STD_LOW
#define PORTD_PIN2_INITIAL_LEVEL				       STD_LOW
#define PORTD_PIN3_INITIAL_LEVEL				       STD_LOW
#define PORTD_PIN4_INITIAL_LEVEL				       STD_LOW
#define PORTD_PIN5_INITIAL_LEVEL				       STD_LOW
#define PORTD_PIN6_INITIAL_LEVEL				       STD_LOW
#define PORTD_PIN7_INITIAL_LEVEL				       STD_LOW /*LOCKED*/

#define PORTE_PIN0_INITIAL_LEVEL				       STD_LOW
#define PORTE_PIN1_INITIAL_LEVEL				       STD_LOW
#define PORTE_PIN2_INITIAL_LEVEL				       STD_LOW
#define PORTE_PIN3_INITIAL_LEVEL				       STD_LOW
#define PORTE_PIN4_INITIAL_LEVEL				       STD_LOW
#define PORTE_PIN5_INITIAL_LEVEL				       STD_LOW

#define PORTF_PIN0_INITIAL_LEVEL				       STD_LOW /*LOCKED*/
#define PORTF_PIN1_INITIAL_LEVEL				       STD_LOW
#define PORTF_PIN2_INITIAL_LEVEL				       STD_LOW
#define PORTF_PIN3_INITIAL_LEVEL				       STD_LOW
#define PORTF_PIN4_INITIAL_LEVEL				       STD_LOW

/*******************************************************************************
 *                        PINS MODE CONFIGURATIONS                             *
 *******************************************************************************/
#define PORTA_PIN0_MODE				         (Port_PinModeType)PORT_PIN_MODE_DIO /*GPIO*/
#define PORTA_PIN1_MODE					     (Port_PinModeType)PORT_PIN_MODE_DIO
#define PORTA_PIN2_MODE				         (Port_PinModeType)PORT_PIN_MODE_DIO
#define PORTA_PIN3_MODE				         (Port_PinModeType)PORT_PIN_MODE_DIO
#define PORTA_PIN4_MODE					     (Port_PinModeType)PORT_PIN_MODE_DIO
#define PORTA_PIN5_MODE					     (Port_PinModeType)PORT_PIN_MODE_DIO
#define PORTA_PIN6_MODE					     (Port_PinModeType)PORT_PIN_MODE_DIO
#define PORTA_PIN7_MODE					     (Port_PinModeType)PORT_PIN_MODE_DIO

#define PORTB_PIN0_MODE				         (Port_PinModeType)PORT_PIN_MODE_DIO
#define PORTB_PIN1_MODE					     (Port_PinModeType)PORT_PIN_MODE_DIO
#define PORTB_PIN2_MODE					     (Port_PinModeType)PORT_PIN_MODE_DIO
#define PORTB_PIN3_MODE					     (Port_PinModeType)PORT_PIN_MODE_DIO
#define PORTB_PIN4_MODE					     (Port_PinModeType)PORT_PIN_MODE_DIO
#define PORTB_PIN5_MODE					     (Port_PinModeType)PORT_PIN_MODE_DIO
#define PORTB_PIN6_MODE					     (Port_PinModeType)PORT_PIN_MODE_DIO
#define PORTB_PIN7_MODE				         (Port_PinModeType)PORT_PIN_MODE_DIO

#define PORTC_PIN4_MODE					     (Port_PinModeType)PORT_PIN_MODE_DIO
#define PORTC_PIN5_MODE					     (Port_PinModeType)PORT_PIN_MODE_DIO
#define PORTC_PIN6_MODE					     (Port_PinModeType)PORT_PIN_MODE_DIO
#define PORTC_PIN7_MODE					     (Port_PinModeType)PORT_PIN_MODE_DIO

#define PORTD_PIN0_MODE					     (Port_PinModeType)PORT_PIN_MODE_DIO
#define PORTD_PIN1_MODE					     (Port_PinModeType)PORT_PIN_MODE_DIO
#define PORTD_PIN2_MODE					     (Port_PinModeType)PORT_PIN_MODE_DIO
#define PORTD_PIN3_MODE					     (Port_PinModeType)PORT_PIN_MODE_DIO
#define PORTD_PIN4_MODE					     (Port_PinModeType)PORT_PIN_MODE_DIO
#define PORTD_PIN5_MODE				         (Port_PinModeType)PORT_PIN_MODE_DIO
#define PORTD_PIN6_MODE					     (Port_PinModeType)PORT_PIN_MODE_DIO
#define PORTD_PIN7_MODE				         (Port_PinModeType)PORT_PIN_MODE_DIO /*LOCKED*/

#define PORTE_PIN0_MODE				         (Port_PinModeType)PORT_PIN_MODE_DIO
#define PORTE_PIN1_MODE				         (Port_PinModeType)PORT_PIN_MODE_DIO
#define PORTE_PIN2_MODE					     (Port_PinModeType)PORT_PIN_MODE_DIO
#define PORTE_PIN3_MODE					     (Port_PinModeType)PORT_PIN_MODE_DIO
#define PORTE_PIN4_MODE			          	 (Port_PinModeType)PORT_PIN_MODE_DIO
#define PORTE_PIN5_MODE					     (Port_PinModeType)PORT_PIN_MODE_DIO

#define PORTF_PIN0_MODE					     (Port_PinModeType)PORT_PIN_MODE_DIO /*LOCKED*/
#define PORTF_PIN1_MODE					     (Port_PinModeType)PORT_PIN_MODE_DIO
#define PORTF_PIN2_MODE					     (Port_PinModeType)PORT_PIN_MODE_DIO
#define PORTF_PIN3_MODE					     (Port_PinModeType)PORT_PIN_MODE_DIO
#define PORTF_PIN4_MODE					     (Port_PinModeType)PORT_PIN_MODE_DIO

/*******************************************************************************
 *                  PINS MODE CHANGEABILITY CONFIGURATIONS                     *
 *******************************************************************************/
#define PORTA_PIN0_MODE_CHANGEABLE				       STD_OFF
#define PORTA_PIN1_MODE_CHANGEABLE				       STD_OFF
#define PORTA_PIN2_MODE_CHANGEABLE				       STD_OFF
#define PORTA_PIN3_MODE_CHANGEABLE				       STD_OFF
#define PORTA_PIN4_MODE_CHANGEABLE		 		       STD_OFF
#define PORTA_PIN5_MODE_CHANGEABLE				       STD_OFF
#define PORTA_PIN6_MODE_CHANGEABLE				       STD_OFF
#define PORTA_PIN7_MODE_CHANGEABLE				       STD_OFF

#define PORTB_PIN0_MODE_CHANGEABLE				       STD_OFF
#define PORTB_PIN1_MODE_CHANGEABLE				       STD_OFF
#define PORTB_PIN2_MODE_CHANGEABLE				       STD_OFF
#define PORTB_PIN3_MODE_CHANGEABLE				       STD_OFF
#define PORTB_PIN4_MODE_CHANGEABLE				       STD_OFF
#define PORTB_PIN5_MODE_CHANGEABLE				       STD_OFF
#define PORTB_PIN6_MODE_CHANGEABLE				       STD_OFF
#define PORTB_PIN7_MODE_CHANGEABLE				       STD_OFF

#define PORTC_PIN4_MODE_CHANGEABLE				       STD_OFF
#define PORTC_PIN5_MODE_CHANGEABLE				       STD_OFF
#define PORTC_PIN6_MODE_CHANGEABLE				       STD_OFF
#define PORTC_PIN7_MODE_CHANGEABLE				       STD_OFF

#define PORTD_PIN0_MODE_CHANGEABLE				       STD_OFF
#define PORTD_PIN1_MODE_CHANGEABLE			           STD_OFF
#define PORTD_PIN2_MODE_CHANGEABLE				       STD_OFF
#define PORTD_PIN3_MODE_CHANGEABLE				       STD_OFF
#define PORTD_PIN4_MODE_CHANGEABLE				       STD_OFF
#define PORTD_PIN5_MODE_CHANGEABLE				       STD_OFF
#define PORTD_PIN6_MODE_CHANGEABLE				       STD_OFF
#define PORTD_PIN7_MODE_CHANGEABLE				       STD_OFF /*LOCKED*/

#define PORTE_PIN0_MODE_CHANGEABLE				       STD_OFF
#define PORTE_PIN1_MODE_CHANGEABLE				       STD_OFF
#define PORTE_PIN2_MODE_CHANGEABLE				       STD_OFF
#define PORTE_PIN3_MODE_CHANGEABLE				       STD_OFF
#define PORTE_PIN4_MODE_CHANGEABLE				       STD_OFF
#define PORTE_PIN5_MODE_CHANGEABLE				       STD_OFF

#define PORTF_PIN0_MODE_CHANGEABLE				       STD_OFF /*LOCKED*/
#define PORTF_PIN1_MODE_CHANGEABLE				       STD_OFF
#define PORTF_PIN2_MODE_CHANGEABLE				       STD_OFF
#define PORTF_PIN3_MODE_CHANGEABLE				       STD_OFF
#define PORTF_PIN4_MODE_CHANGEABLE				       STD_OFF

#endif /* PORT_CFG_H */

/**********************************************************************************************************************
 *  END OF FILE: Port_Cfg.h
 *********************************************************************************************************************/