/******************************************************************************
 *
 * Module: Led
 *
 * File Name: Led.c
 *
 * Description: Source file for Led Module.
 *
 * Author: Ahmed Ehab
 ******************************************************************************/
#include "Dio.h"
#include "Led.h"

/*********************************************************************************************/
void LED_setOn(void)
{
    Dio_WriteChannel(DioConf_LED1_CHANNEL_ID_INDEX,LED_ON);  /* LED ON */
}

/*********************************************************************************************/
void LED_setOff(void)
{
    Dio_WriteChannel(DioConf_LED1_CHANNEL_ID_INDEX,LED_OFF); /* LED OFF */
}

/*********************************************************************************************/
void LED_toggle(void)
{
    Dio_FlipChannel state = Dio_FlipChannel(DioConf_LED1_CHANNEL_ID_INDEX);
}

/*********************************************************************************************/
