#include <stdint.h>

void lcd_implementation_set_cursor(uint8_t row, uint8_t column);
void lcd_implementation_print(const char* str);

void lcd_about_hook() {
    lcd_implementation_set_cursor(0,0);
    lcd_implementation_print("MOD: Javier-varez");
}
