 /******************************************************************************
 *
 * Module: Dio
 *
 * File Name: Dio_Cfg.h
 *
 * Description: Pre-Compile Configuration Header file for TM4C123GH6PM Microcontroller - Dio Driver
 *
 * Author: Ahmed Ehab
 ******************************************************************************/

#ifndef DIO_CFG_H
#define DIO_CFG_H

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/
 
 /* Port Configuration*/
#define PORTA           (Dio_PortType)0
#define PORTB           (Dio_PortType)1
#define PORTC           (Dio_PortType)2
#define PORTD           (Dio_PortType)3
#define PORTE           (Dio_PortType)4
#define PORTF           (Dio_PortType)5
 
/* Number of the configured Dio Channels */
#define DIO_CONFIGURED_CHANNLES             (3U)

/* Channel Index in the array of structures in Dio_Lcfg.c */
#define DioConf_LED1_CHANNEL_ID_INDEX        (uint8)0x00
#define DioConf_LED2_CHANNEL_ID_INDEX        (uint8)0x01
#define DioConf_LED3_CHANNEL_ID_INDEX        (uint8)0x02

/* DIO Configured Port ID's  */
#define DioConf_LED1_PORT_NUM                PORTF
#define DioConf_LED2_PORT_NUM                PORTF
#define DioConf_LED3_PORT_NUM                PORTF

/* DIO Configured Channel ID's */
#define DioConf_LED1_CHANNEL_NUM             (Dio_ChannelType)1 /* Pin 1 in PORTF */
#define DioConf_LED2_CHANNEL_NUM             (Dio_ChannelType)2 /* Pin 2 in PORTF */
#define DioConf_LED3_CHANNEL_NUM             (Dio_ChannelType)3 /* Pin 3 in PORTF */

#endif /* DIO_CFG_H */

/**********************************************************************************************************************
 *  END OF FILE: Dio_Cfg.h
 *********************************************************************************************************************/
