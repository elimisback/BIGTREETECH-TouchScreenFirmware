#ifndef _NT35310_H_
#define _NT35310_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

uint8_t LCD_DriveIsNT35310(void);
void NT35310_Init_Sequential(void);
void NT35310_SetDirection(uint8_t rotate);
void NT35310_SetWindow(uint16_t sx, uint16_t sy, uint16_t ex, uint16_t ey);
uint32_t NT35310_ReadPixel_24Bit(int16_t x, int16_t y);

#ifdef __cplusplus
}
#endif

#endif
