//https://github.com/adaxiik/
#pragma once
#include <stdint.h>
#include <cstring>

#define LCD_WIDTH       320
#define LCD_HEIGHT      240
#define LCD_NAME        "LCD display"
#define DigitalIn       extern bool

void lcd_put_pixel( int32_t t_x, int32_t t_y, uint16_t t_rgb_565 );

void lcd_init();
void lcd_clean();
void lcd_dontclose();
void lcd_update();