/*
 * interrupt.h
 *
 *  Created on: Aug 31, 2024
 *      Author: nkota
 */

#ifndef INC_INTERRUPT_H_
#define INC_INTERRUPT_H_


//====変数====
#ifdef MAIN_C_              //main.cからこのファイルが呼ばれている場合
  /*グローバル変数の定義*/
  volatile int16_t dl_tmp, dr_tmp;
  volatile uint16_t wall_base_l, wall_base_r;
  volatile uint16_t ctrl_base_l, ctrl_base_r;
  volatile uint16_t ctrl_max, ctrl_p, ctrl_d, ctrl_amount;
#else                       //main.c意外からこのファイルが呼ばれている場合
  /*グローバル変数の定義*/
  extern volatile int16_t dl_tmp, dr_tmp;
  extern volatile uint16_t wall_base_l, wall_base_r;
  extern volatile uint16_t ctrl_base_l, ctrl_base_r;
  extern volatile uint16_t ctrl_max, ctrl_p, ctrl_d, ctrl_amount;
#endif


void tim6_wait_us(uint32_t);

void interrupt_init(void);    //制御系変数初期化関数


#endif /* INC_INTERRUPT_H_ */
