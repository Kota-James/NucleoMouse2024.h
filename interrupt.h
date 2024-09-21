/*
 * interrupt.h
 *
 *  Created on: Aug 31, 2024
 *      Author: nkota
 */

#ifndef INC_INTERRUPT_H_
#define INC_INTERRUPT_H_

uint32_t pre_ad_l, pre_ad_r;              //前回のセンサ値を格納
int32_t change_value_l, change_value_r;   //前回のセンサ値との差を入れる変数

void tim6_wait_us(uint32_t);


#endif /* INC_INTERRUPT_H_ */
