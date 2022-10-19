#include "main.h"

int hex_cnv(unsigned int n, unsigned int hex, char letter);

/**
 * print_hex - A function that prints a lowercase Hexa
 * @arg: argument to be inputted
 * Return: returns count of value
 */
int print_hex(va_list arg)
{
	return (hex_cnv(va_arg(arg, unsigned int), 16, 'a'));
}

/**
 * print_Hex - A function that prints a Uppercase Hexa
 * @arg: argument to be inputted
 * Return: returns count of value
 */
int print_Hex(va_list arg)
{
	return (hex_cnv(va_arg(arg, unsigned int), 16, 'A'));
}

/**
 * hex_cnv- converts the number from base 10 to hex
 * @n: number to be converted
 * @hex: base of 16 being passed
 * @letter: Char 'A' to 'F' or 'a' to 'f'
 * Return: number of chars printed
 */
int hex_cnv(unsigned int n, unsigned int hex, char letter)
{
	unsigned int num;
	unsigned int rem;
	char c;

	rem = n % hex;
	num = n / hex;

	if (rem > 10)
		c = (rem - 10) + letter;
	else
		c = rem + '0';
	if (num == 0)
	{
		return (_putchar(c));
	}
	if (num < hex)
	{
		if (num > 10)
			return (_putchar(num - 10 + letter) + _putchar(c));
		return (_putchar(num + '0') + _putchar(c));
	}
	return (hex_cnv(num, hex, letter) + _putchar(c));
}
