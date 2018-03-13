/*****************************************************************************
* | File      	:	WS1in8LCD
* | Author      :   Waveshare team
* | Function    :	Contorl lcd Show
* | Info        :
*----------------
* |	This version:   V1.0
* | Date        :   2018-02-22
* | Info        :   Basic version
*
******************************************************************************/

enum LCD_COLOR {
    WHITE = 0xFFFF,
    BLACK = 0x0000,
    BLUE = 0x001F,
    BRED = 0XF81F,
    GRED = 0XFFE0,
    GBLUE = 0X07FF,
    RED = 0xF800,
    MAGENTA = 0xF81F,
    GREEN = 0x07E0,
    CYAN = 0x7FFF,
    YELLOW = 0xFFE0,
    BROWN = 0XBC40,
    BRRED = 0XFC07,
    GRAY = 0X8430
}
let GUI_BACKGROUND_COLOR = LCD_COLOR.WHITE
let FONT_BACKGROUND_COLOR = LCD_COLOR.WHITE
let FONT_FOREGROUND_COLOR = LCD_COLOR.BLACK

enum DOT_PIXEL {
    DOT_PIXEL_1X1 = 1,  // dot pixel 1 x 1
    DOT_PIXEL_2X2, 		// dot pixel 2 X 2 
    DOT_PIXEL_3X3,		// dot pixel 3 X 3
    DOT_PIXEL_4X4,		// dot pixel 4 X 4
}
let DOT_PIXEL_DFT = DOT_PIXEL.DOT_PIXEL_1X1  //Default dot pilex

enum LINE_STYLE {
    LINE_SOLID = 0,
    LINE_DOTTED,
}

enum DRAW_FILL {
    DRAW_EMPTY = 0,
    DRAW_FULL,
}

/**
 * 1.8-inch LCD display.
 */
//% weight=20 color=#436EEE icon="\uf108"
namespace WSLCD1in8 {
    //% blockId==LCD_Init block="LCD CONFIG "
    //% weight=200
    //% shim=OLED::LCD_Init
    export function LCD_Init(): void {
        return;
    }
	
    //% blockId==LCD_Clear block="LCD Clear |%Color"
    //% weight=199
    //% shim=OLED::LCD_Clear	
	export function LCD_Clear(Color: LCD_COLOR): void {
        return;
    }
}
