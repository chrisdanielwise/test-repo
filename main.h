#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>

struct convt_specifier convt_id{
	char *id;
}
int _printf(const char *format, ...);
int _putchar(char c);

/*conversion specifiers*/
int print_char(va_list arg);
int print_string(va_list arg);
int print_percent(va_list arg);
#endif
