#ifndef MGOS_LCD_I2C_H
#define MGOS_LCD_I2C_H

#include "LiquidCrystal_I2C.h"

#ifdef __cplusplus
extern "C" {
#endif

LiquidCrystal_I2C *mgos_lcd_i2c_create(uint8_t addr);

void mgos_lcd_i2c_delete(LiquidCrystal_I2C *lcd);

void mgos_lcd_i2c_begin(LiquidCrystal_I2C *lcd, uint8_t cols, uint8_t rows, uint8_t charsize);

void mgos_lcd_i2c_clear(LiquidCrystal_I2C *lcd);

void mgos_lcd_i2c_home(LiquidCrystal_I2C *lcd);

void mgos_lcd_i2c_set_cursor(LiquidCrystal_I2C *lcd, uint8_t, uint8_t);

void mgos_lcd_i2c_print(LiquidCrystal_I2C *lcd, const char[]);

void mgos_lcd_i2c_print_double(LiquidCrystal_I2C *lcd, double n, int digits);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* MGOS_LCD_I2C_H */