/*
 * st25r3916_if.c
 *
 *  Created on: Apr 16, 2021
 *      Author: fil
 */
#include "main.h"
#include <string.h>


int32_t BSP_GetTick(void)
{
  return HAL_GetTick();
}

int32_t BSP_SPI1_Send(const uint8_t * const pData, const uint16_t Length)
{
  uint8_t   tx[256];

  if (pData != NULL)
  {
    (void)memcpy(tx, pData, Length);
  }
  return HAL_SPI_Transmit(&hspi1, tx, Length, BUS_SPI1_TIMEOUT);
}
int32_t BSP_SPI1_Recv(uint8_t * const pData, const uint16_t Length)
{
  uint8_t   rx[256];
  return HAL_SPI_Receive(&hspi1, (pData != NULL) ? (uint8_t *)pData : rx, Length, BUS_SPI1_TIMEOUT);
}
int32_t BSP_SPI1_SendRecv(const uint8_t * const pTxData, uint8_t * const pRxData, uint16_t Length)
{
  uint8_t   tx[256];
  uint8_t   rx[256];

  if (pTxData != NULL)
  {
    (void)memcpy(tx, pTxData, Length);
  }
  return HAL_SPI_TransmitReceive(&hspi1, tx, (pRxData != NULL) ? (uint8_t *)pRxData : rx, Length, BUS_SPI1_TIMEOUT);

}
__weak void BSP_SPI1_IRQ_Callback(void)
{
  /* Prevent unused argument(s) compilation warning */

  /* This function should be implemented by the user application.
   * It is called into this driver when an event from ST25R3916 is triggered.
   */
  st25r3916Isr();
}
/*
void BSP_SPI1_IRQHandler(void)
{
  HAL_EXTI_IRQHandler(&hExti0);
}
*/
