/*
 * UART_config.c
 *
 *  Created on: 3 Dec 2019
 *      Author: WEST
 */
#include "UART_priv.h"
#include "UART_int.h"
#include "UART_Config.h"
extern void GPS_ReceptionDone(void);


UART_s_module_t UART_ConfigArray [NUMBER_OF_MODULES] =

{
 {9600 ,
  UART1,
  UART_8BitData ,
  UART_ONEStopBit ,
  UART_FIFO_Enabled,
  UART_ParityBitDisabled ,
  UART_EvenParity ,
  UART_NORMAL_SPEED_MODE,
  { UART_8ByteTriggerLength,UART_INT_ENABLED,NULL },
  { UART_2ByteTriggerLength,UART_INT_ENABLED,GPS_ReceptionDone } ,
 }
};
