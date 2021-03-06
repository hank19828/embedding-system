/*
 * printf.h
 *
 *  Created on: Apr 26, 2021
 *      Author: wandog
 */

#ifndef INC_PRINTF_H_
#define INC_PRINTF_H_
#include <stdio.h>
#include <string.h>
#ifdef __GNUC__
/* With GCC, small printf (option LD Linker->Libraries->Small printf
   set to 'Yes') calls __io_putchar() */

UART_HandleTypeDef huart2;
#define PUTCHAR_PROTOTYPE int __io_putchar(int ch)\
//{\
//	HAL_UART_Transmit(&huart2, (uint8_t *)ch, strlen(int), 0xffff);\
//	return ch;\
//}

#else
#define PUTCHAR_PROTOTYPE int fputc(int ch, FILE *f)
#endif /* __GNUC__ */
/**
  * @brief  Retargets the C library printf function to the USART.
  * @param  None
  * @retval None
  */




#endif /* INC_PRINTF_H_ */
