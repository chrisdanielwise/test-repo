#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>

/**
 * struct convt_specifier - function to check for formats
 * @id: identifies the format to print
 * @f: The ponter to funtion corresponding with format
 */
typedef struct convt_specifier
{
	char *id;
	int (*f)(va_list arg);
} cnv_t;

/* Main protos*/
int _printf(const char *format, ...);
int _putchar(char c);

/*conversion specifiers*/
int print_char(va_list arg);
int print_string(va_list arg);
int print_percent(va_list arg);
int print_int(va_list arg);
int print_dec(va_list arg);
int print_bin(va_list arg);
int print_hex(va_list arg);
int print_Hex(va_list arg);
int print_oct(va_list arg);
int print_unsgnint(va_list arg);
int print_pointer(va_list arg);
int print_revstr(va_list arg);
int print_Rot13(va_list arg);

/*Helping protos*/
int hex_cnv(unsigned int n, unsigned int hex, char letter);

#endif
