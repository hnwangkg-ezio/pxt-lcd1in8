#include "DEV_Config.h"
#include <stdio.h>		//printf()
#include "pxt.h"

SPI* spi = NULL;
SPI* allocSPI() {
	if (NULL == spi)
		spi = new SPI(MOSI, MISO, SCK);
	return spi;
}

uint8_t DEV_Config::System_Init(void)
{

    return 0;
}

void DEV_Config::System_Exit(void)
{

}

 void DEV_Config::SPI_Write_Byte(uint8_t value)                                    
{    
	auto p = allocSPI();
	return p->write(value);
}

void DEV_Config::Driver_Delay_ms(int xms)	
{	
	wait_us(xms);
}

void DEV_Config::Driver_Delay_us(int xus)
{
  int j;
  for(j=xus;j > 0;j--);    
}
