/*
 * auxiliary.h
 *
 *  Created on: Aug 30, 2024
 *      Author: nkota
 */

#ifndef INC_AUXILIARY_H_
#define INC_AUXILIARY_H_



#define min(A,B) ((A)>(B))?(B):(A)
#define max(A,B) ((A)>(B))?(A):(B)



void led_write(uint8_t, uint8_t, uint8_t);
void led_write_2(uint8_t);
void led_flash(uint8_t);
int select_mode(int);



#endif /* INC_AUXILIARY_H_ */
