/*
 * st25r3916_if.h
 *
 *  Created on: Apr 16, 2021
 *      Author: fil
 */

#ifndef INC_SINTMATE_NFCRFID_ST25R3916_IF_H_
#define INC_SINTMATE_NFCRFID_ST25R3916_IF_H_

extern	int32_t BSP_GetTick(void);
extern	int32_t BSP_SPI1_Send(const uint8_t * const pData, const uint16_t Length);
extern	int32_t BSP_SPI1_Recv(uint8_t * const pData, const uint16_t Length);
extern	int32_t BSP_SPI1_SendRecv(const uint8_t * const pTxData, uint8_t * const pRxData, uint16_t Length);
extern	void BSP_SPI1_IRQ_Callback(void);


#endif /* INC_SINTMATE_NFCRFID_ST25R3916_IF_H_ */
