#ifndef __DRIVER_LED_H_
#define __DRIVER_LED_H_

#include "stm32f4xx.h"
#include "explore_system.h"

#define LED_ON 0							// LED灯亮
#define LED_OFF 1							// LED灯灭

#define DS0 PFout(9)
#define DS1 PFout(10)

void LED_Init(void);							// LED初始化函数

#endif /* __DRIVER_LED_H_ */
