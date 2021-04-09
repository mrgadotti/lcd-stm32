# Custom librarie to use 16x2 LCD on STM32

Based on: [4 Pins LCD-Character Library for STM32 HAL
](https://github.com/nimaltd/LCD-Character)

Usage:
- Copy the files **lcd.c** and **DWT_Delay.c** to **Src** folder
- Copy the files **lcd.h**, **lcd_config.h** and **DWT_Delay.h** to **Inc** folder

On **main.h**, add the follow includes:

``` c
#include "DWT_Delay.h"
#include "lcd.h"
```

On **main.c**, add the follow calls on /* USER CODE BEGIN 2 */:

``` c
DWT_Delay_Init();
LCD_Init();
```

On **lcd_config.h**, configure the GPIO used on the LCD.