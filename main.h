#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>

/**
* struct convert - struct for symbols and functions
*
*@sym: the format symbol
*@f: the function associated
*/
struct convert
{
	char *sym;
	int (*f)(va_list);
};
typedef struct convert conver_t;
int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list args);
int print_s(va_list args);
int print_percent(va_list args);
int print_d(va_list args);
int print_i(va_list args);
int (*prntfunc(char x))(va_list);

#endif
