#include "pxt.h"
#include "LCD_GUI.h"
#include "LCD1in8_Driver.h"
#include <stdint.h>

using namespace pxt;

namespace WSLCD1in8 {
	LCD_GUI *LCD;
	//%
	void LCD_Init(){
		LCD->LCD_Init(SCAN_DIR_DFT);
	}
	
	//%
	void LCD_Clear(uint32_t Color){
		LCD->LCD_Clear(Color);
	}
}