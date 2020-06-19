
#ifndef DEF_H_
#define DEF_H_

#include <avr/io.h>
#include <stdint.h>
#include <stdint.h>
#include "def_arduboy_mega.h"

#define IMPLEMENTED
//#define USE_DESIGN_UPGRADE
#define GUI_EXPLORER

#define MAX_DISK_NR					1
#define SSD1306_USE_NO_BUF

/*********************************************************************************************************************************/

#define GUI_APP_FILE_INCLUDE																						"app-sec-boot.h"
#define GUI_UPPER_LIMIT_ROW																							0
#define GUI_LOWER_LIMIT_ROW																							7
#define GUI_LIST_OF_DISPLAYED_EXTENSIONS																			{"APP"} // Upper cases
#define GUI_ACT_FUNC_ON_FILE_SELECT(uSD, spi_screen, screen_buf)													app_app_load(uSD, spi_screen, screen_buf)
#define GUI_ACT_FUNC_AT_uSD_INSERT(uSD, spi_screen, screen_buf)														app_card_inserted(uSD, spi_screen, screen_buf)
//#define GUI_ACT_FUNC_ON_LEFT_BTN_PRESS(uSD, spi_screen, screen_buf)												app_left(uSD, spi_screen, screen_buf)
//#define GUI_ACT_FUNC_ON_RIGHT_BTN_PRESS(uSD, spi_screen, screen_buf)												app_right(uSD, spi_screen, screen_buf)

#define DISPLAY_FUNC_INIT(spi, screen_buf)																			ssd1306_init(spi, screen_buf)
#define DISPLAY_FUNC_DRAW_PIXEL(inst, box, buf, x, y, inkColor)														ssd1306_draw_pixel(inst, box, buf, x, y, inkColor)
#define DISPLAY_FUNC_DRAW_RECTANGLE(inst, box, buf, x, y, x_size, y_size, fill, inkColor)							ssd1306_draw_rectangle(inst, box, buf, x, y, x_size, y_size, fill, inkColor)
#define DISPLAY_FUNC_DRAW_STRING(inst, box, buf, string, x, y, terminalMode, wordWrap, foreColor, inkColor)			ssd1306_draw_string(inst, box, buf, string, x, y, terminalMode, wordWrap, foreColor, inkColor)
//#define DISPLAY_FUNC_DRAW_LINE(inst, box, buf, x1, y1, x2, y2, inkColor)											ssd1306_draw_line(inst, box, buf, x1, y1, x2, y2, inkColor)
#define DISPLAY_FUNC_DRAW_H_LINE(inst, box, buf, x1, x2, y, width, inkColor)										ssd1306_draw_h_line(inst, box, buf, x1, x2, y, width, inkColor)
#define DISPLAY_FUNC_DRAW_V_LINE(inst, box, buf, y1, y2, x, width, inkColor)										ssd1306_draw_v_line(inst, box, buf, y1, y2, x, width, inkColor)


/*******************************************/
#endif /* DEF_H_ */
