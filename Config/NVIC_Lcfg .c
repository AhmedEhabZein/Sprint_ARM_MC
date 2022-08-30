 /******************************************************************************
 *Module: NVIC
 *
 * File Name: NVIC_Lcfg.c
 *
 * Description: Post Build Configuration Source file for TM4C123GH6PM Microcontroller - NVIC Driver
 *
 * Author: Ahmed Ehab
 ******************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

#include "NVIC.h"

/**********************************************************************************************************************
 *  GLOBAL DATA
 *********************************************************************************************************************/

/* PB structure used with NVIC_Init API */
const IntCtrl_ConfigType IntCtrl_Configuration = {
                                             NVIC_CONF_PERIPHERAL_TYPE,NVIC_CONF_GROUP_PRI,NVIC_CONF_SUB_GROUP_PRI
				         };

/**********************************************************************************************************************
 *  END OF FILE: NVIC_Lcfg.c
 *********************************************************************************************************************/