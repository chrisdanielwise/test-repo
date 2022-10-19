#include "main.h"

/**
 * _printf - prints output according to format
 * @format: string being passed
 * Return: char to be printed
 */

int _printf(const char *format, ...)
{
	va_list arg;
	int index = 0;
	int count = 0;
	int j;

	cnv_t  op[] = {
		{"c", print_char}, {"s", print_string},
		{"%", print_percent}, {"d", print_dec},
		{"i", print_int}, {"u", print_unsgnint},
		{"b", print_bin}, {"o", print_oct},
		{"x", print_hex}, {"X", print_Hex},
		{"S",}, {"p", print_pointer},
		{"r", print_revstr},	{"R", print_Rot13}
	};

	va_start(arg, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))

		return (-1);
Here:
	while (format && (*(format + index)) != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (op[j].id[0] == format[index] && op[j].id[1] == format[index + 1])
			{
				count = count + op[j].f(arg);
				index = index + 2;
				goto Here;
			}
			j++;
		}
		_putchar(format[index]);
		count++;
		index++;
	}
	va_end(arg);
	return (count);
}
