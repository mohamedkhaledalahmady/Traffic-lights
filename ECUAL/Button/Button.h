#ifndef BUTTON_H
#define BUTTON_H
#include "..\..\MCAL\GPIO\GPIO.h"

// Status
#define Sucess 1
#define Fail 0

// Functions
uint8_t BUTTON_Init(uint8_t, uint8_t);
uint8_t BUTTON_PullUp(uint8_t, uint8_t);
uint8_t BUTTON_State(uint8_t, uint8_t);

#endif