#ifndef LCD_H
#define LCD_H

#include <stdint.h>
#include "DWT_Delay.h"

void LCD_Init(void);
void LCD_DisplayOn(void);
void LCD_DisplayOff(void);
void LCD_Clear(void);
void LCD_Puts(uint8_t, uint8_t, char*);
void LCD_BlinkOn(void);
void LCD_BlinkOff(void);
void LCD_CursorOn(void);
void LCD_CursorOff(void);
void LCD_ScrollLeft(void);
void LCD_ScrollRight(void);
void LCD_CreateChar(uint8_t, uint8_t*);
void LCD_PutCustom(uint8_t);
void LCD_PutCustom_CursorSet(uint8_t, uint8_t, uint8_t);
void LCD_CursorSet(uint8_t, uint8_t);
void LCD_Put(char Data);
void LCD_Write_String(char *);
void LCD_ClearRow(uint8_t);

#endif

