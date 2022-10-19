#include "main.h"

/**
 * print_revstr - function that prints a string in reverse
 * @arg: argument inputted
 * Return: count
 */
int print_revstr(va_list arg)
{
	char *s;
	int i;
	int j;

	s = va_arg(arg, char*);
	j = 0;
	if (s == NULL)
		s = "(null)";
	while (s[j] != '\0')
		j++;
	for (i  = j - 1; i >= 0; i--)
		_putchar(s[i]);
	return (j);
}

/**
 * print_Rot13 - Converts string to rot13
 * @arg: string to convert
 * Return: converted string
 */

int print_Rot13(va_list arg)
{
	iot i;
	int x;
	char *str;
	char s[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char u[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	str = va_arg(list, char *);
	if (str == NULL)
		return (-1);
	for (i = 0; str[i] != '\0'; i++)
	{
		for (x = 0; x <= 52; x++)
		{
			if (str[i] == s[x])
			{
				_write_char(u[x]);
				break;
			}
		}
		if (x == 53)
			_write_char(str[i]);
	}
	return (i);
}
