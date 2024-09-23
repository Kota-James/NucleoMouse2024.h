/*
 * params.h
 *
 *  Created on: Aug 31, 2024
 *      Author: nkota
 */

#ifndef INC_PARAMS_H_
#define INC_PARAMS_H_

/*============================================================
    各種定数（パラメータ）設定
============================================================*/
/*------------------------------------------------------------
    走行系
------------------------------------------------------------*/
//----走行パルス関連----
#define PULSE_SEC_HALF 218 // 半区画走行用パルス。2倍すると1区画分に
#define PULSE_ROT_R90 154     // 右90度回転用パルス数
#define PULSE_ROT_L90 155     // 左90度回転用パルス数
#define PULSE_ROT_IN 146      //スラローム走行時の内側走行パルス数
#define PULSE_ROT_OUT 448     //スラローム走行時の外側走行パルス数
#define PULSE_OFFSET 39       //スラローム前後のオフセット区間
#define PULSE_ROT_180 310     // 180度回転用パルス数
#define PULSE_SETPOS_BACK 200 // 後ろ壁に当てるために下がるパルス数
#define PULSE_SETPOS_SET 94 // 後ろ壁から中央までのパルス数

#define T_CNT_ACCL 1      //加速処理時のテーブルカウンタの変更量
#define T_CNT_DECL 1      //減速処理時のテーブルカウンタの変更量
//----テーブルカウンタ関連----
#define MAX_T_CNT MIN_T_CNT + PULSE_SEC_HALF // テーブルカウンタの最大値
#define MIN_T_CNT 0              // テーブルカウンタの最小値
//----タイマ関連----
#define DEFAULT_INTERVAL 2980 // デフォルトのインターバル

#define ARR_IN 3425         //スラローム走行時の内側ARR
#define ARR_OUT 1116        //スラローム走行時の外側ARR
#define ARR_OFFSET (ARR_IN + ARR_OUT)/2

//----動作方向関連----
#define MT_FWD_L GPIO_PIN_SET    // CW/CCWで前に進む出力（左）
#define MT_BACK_L GPIO_PIN_RESET // CW/CCWで後ろに進む出力（左）
#define MT_FWD_R GPIO_PIN_RESET  // CW/CCWで前に進む出力（右）
#define MT_BACK_R GPIO_PIN_SET   // CW/CCWで後ろに進む出力（右）

/*------------------------------------------------------------
    センサ系
------------------------------------------------------------*/
//----壁判断閾値（しきい値）----
#define WALL_BASE_FR 100 // 前壁右センサ
#define WALL_BASE_FL 250 // 前壁左センサ
#define WALL_BASE_R 300  // 右壁センサ
#define WALL_BASE_L 300  // 左壁センサ

#define ROT_START_FL 940//900//940//1006
#define ROT_START_FR 633//600//633//683

#define BATT_LOW_VOL 3204 * 0.88 // バッテリ電圧低下判定のしきい値
// 33kΩと10kΩの分圧抵抗を通してバッテリ電圧を取得している→ 11.1*(10/(10+33)/3.3)*4096=3204

//----制御閾値（しきい値）----
#define RAPID_CHANGE 250  //急激な変化量の基準値
#define CTRL_BASE_L 100 // 左制御閾値
#define CTRL_BASE_R 100 // 右制御閾値
#define CTRL_MAX 200    // 制御量上限値
#define CTRL_P 0.25  // 比例制御係数
#define CTRL_D  0.30  //微分制御係数

//----赤外線（赤色）LED発光待機時間（単位はマイクロ秒）
#define IR_WAIT_US 15

/*------------------------------------------------------------
    探索系
------------------------------------------------------------*/
//----ゴール座標----
#define GOAL_X 1 // 7
#define GOAL_Y 0 // 7

#endif /* INC_PARAMS_H_ */
