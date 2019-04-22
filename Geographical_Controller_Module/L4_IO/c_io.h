/*
 * c_io.h
 *
 *  Created on: Mar 4, 2019
 *      Author: vidushi
 */

#ifndef C_IO_H_
#define C_IO_H_

#include <stdbool.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

enum {
    sw1 = (1 << 0),
    sw2 = (1 << 1),
    sw3 = (1 << 2),
    sw4 = (1 << 3),
}switch_pressed;

void setLED(uint8_t ledNum, bool on);
void setLCD_Display(char num);
void Clear_Display();
void setLCD_LEFT(char num);
void setLCD_Right(char num);
uint8_t switch_detect(void);
bool switch_function(int number);


#ifdef __cplusplus
}
#endif


#endif /* C_IO_H_ */