#include "main.h"

/**
 * print_char - prints characters;
 * @arg: List of argument
 * Return: returns an unsigned char to an int.
 */
int print_char(va_list arg)
{
	return (_putchar(va_arg(arg, int)));
}

/**
 * print_string - prints string;
 * @arg: List of argument
 * Return: returns length of string on success
 */
int print_string(va_list arg)
{
	int len;
	char *str;

	str = (va_arg(arg, char *));

	if (str == NULL)
	{
		str = "(null)";
	}

	len = 0;
	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len++;
	}
	return (len);
}

/**
 * print_percent - prints percentage symbol
 * @arg: List of argument
 * Return: returns an int
 */
int print_percent(__attribute__((unused))va_list arg)
{
	putchar('%');
	return (1);
}
