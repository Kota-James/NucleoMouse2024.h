/*
 * global.h
 *
 *  Created on: Aug 31, 2024
 *      Author: nkota
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_


#include "main.h"

#include "params.h"


/*------------------------------------------------------------
    共用・構造体の定義
------------------------------------------------------------*/
/**********
共用・構造体とは，共用体と構造体を組み合わせたもので，
内部の一括操作も，メンバ単位での操作も可能なものである。
例えば，以下のmouse_flags共用・構造体のMFでは，
MF.FLAGS = 0;と全体を一括変更できるほか，
MF.FLAG.DECL = 1;とメンバを指定して単体で変更することも出来る。
**********/

//----フラグ共用・構造体----
typedef union {         //共用体の宣言
  uint16_t FLAGS;
  struct ms_flags{      //構造体の宣言
    uint16_t RSV0:1;    //予備ビット(B0)   (:1は1ビット分の意味，ビットフィールド)
    uint16_t SCND:1;    //二次走行フラグ(B1)
    uint16_t RSV2:1;    //予備ビット(B2)
    uint16_t CTRL:1;    //制御フラグ(B3)
    uint16_t ACCL:1;    //加速フラグ(B4)
    uint16_t DECL:1;    //減速フラグ(B5)
    uint16_t DEF:1;     //デフォルトインターバルフラグ(B6)
    uint16_t LOWVOL:1;  //バッテリー低電圧フラグ(B7)
    uint16_t ROTATEL:1;    //左回転フラグ(B8)
    uint16_t ROTATER:1;    //右回転フラグ(B9)
    uint16_t DRIVEU2:1;   //DriveU2(B10)
    uint16_t MODE1:1;   //制御量調整(B11)
    uint16_t MODE2:1;   //制御量調整(B12)
    uint16_t MODE3:1;   //制御量調整(B13)
    uint16_t MODE4:1;   //制御量調整(B14)
    uint16_t RSV15:1;   //予備ビット(B15)
  }FLAG;
} mouse_flags;

#ifdef MAIN_C_              //main.cからこのファイルが呼ばれている場合
  /*グローバル変数の定義*/
  volatile mouse_flags MF;      //マウスステータスをまとめた共用・構造体
#else                 //main.c以外からこのファイルが呼ばれている場合
  /*グローバル変数の宣言*/
  extern volatile mouse_flags MF;
#endif

#include "auxiliary.h"
#include "interrupt.h"
#include "eeprom.h"
#include <stdio.h>

#include "drive.h"
#include "sensor.h"
#include "search.h"



#endif /* INC_GLOBAL_H_ */
