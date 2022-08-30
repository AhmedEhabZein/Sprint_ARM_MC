 /******************************************************************************
 *
 * Module: NVIC
 *
 * File Name: NVIC_Cfg.h
 *
 * Description: Pre-Compile Configuration Header file for TM4C123GH6PM Microcontroller - NVIC Driver
 *
 * Author: Ahmed Ehab
 ******************************************************************************/

#ifndef NVIC_CFG_H
#define NVIC_CFG_H

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/
  
/* Number of the configured Interrupts */
#define NVIC_CONFIGURED_INTERRUPTS              (1U)

/* Channel Index in the array of structures in IntCtrl_Lcfg.c */
#define NVIC_CONF_TIMER_CHANNEL_ID_INDEX        	(uint8)0x00

/* INTCTRL Configured Peripheral  */
#define NVIC_CONF_PERIPHERAL_TYPE                   (IntCtrl_InterruptType)15 /* TIMER */

/* INTCTRL Configured Group Priority */
#define NVIC_CONF_GROUP_PRI             			(uint8)0 /* Priority 0 */

/* INTCTRL Configured Sub-Group Priority */
#define NVIC_CONF_SUB_GROUP_PRI             		(uint8)0 /* Priority 0 */

#endif /* NVIC_CFG_H */

/**********************************************************************************************************************
 *  END OF FILE: NVIC_Cfg.h
 *********************************************************************************************************************/
