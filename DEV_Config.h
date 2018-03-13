
#ifndef _DEV_CONFIG_H_
#define _DEV_CONFIG_H_

#include "pxt.h"
#include <stdint.h>

//GPIO config
#define LCD_CS   MICROBIT_ID_IO_P16
#define LCD_RST  MICROBIT_ID_IO_P7
#define LCD_DC   MICROBIT_ID_IO_P6
#define LCD_BL   MICROBIT_ID_IO_P0


#define PINOP(op) \
  MicroBitPin *pin = getPin((int)name); \
  if (!pin) return; \
  pin->op
  
//LCD
#define LCD_CS_0		PINOP(setDigitalValue(0));
#define LCD_CS_1		PINOP(setDigitalValue(1));

#define LCD_RST_0		PINOP(setDigitalValue(0));
#define LCD_RST_1		PINOP(setDigitalValue(1));

#define LCD_DC_0		PINOP(setDigitalValue(0));
#define LCD_DC_1		PINOP(setDigitalValue(1));

//#define LCD_BL_0		PINOP(setDigitalValue(0));
//#define LCD_BL_1		PINOP(setDigitalValue(0));

/*------------------------------------------------------------------------------------------------------*/
class DEV_Config{
public:
	uint8_t System_Init(void);
	void System_Exit(void);

	void SPI_Write_Byte(uint8_t value);
	void Driver_Delay_ms(int xms);
	void Driver_Delay_us(int xus);
};
#endif
