#include "main.h"

/**
 * print_int - This function prints integers
 * @ arg: argument to print
 * Return: number of characters printed
 */
int print_int(va_list arg)
{
	unsigned int num;
	int n, expo = 1, len = 0;


	n = va_arg(arg, int);
	/*Checking for negativity*/
	if (n < 0)
	{
		len = len + _putchar('-');
		num = n * -1;
	}
	else
		num = n;
	/*For placevalue*/
	while (num / expo > 9)
	{
		expo = expo * 10;
	}
	while ( expo != 0)
	{
		len = len + _putchar(n / expo + '0');
		num = num % expo;
		expo = expo / 10;
	}

	return (len);
}


/**
 * print_dec - This function prints decimal
 * @ arg: argument to print
 * Return: number of characters printed
 */
int print_dec(va_list arg)
{
	unsigned int num;
	int n, expo = 1, len = 0;


	n = va_arg(arg, int);
	/*Checking for negativity*/
	if (n < 0)
	{
		len = len + _putchar('-');
		num = n * -1;
	}
	else
		num = n;
	/*For placevalue*/
	while (num / expo > 9)
	{
		expo = expo * 10;
	}
	while ( expo != 0)
	{
		len = len + _putchar(n / expo + '0');
		num = num % expo;
		expo = expo / 10;
	}

	return (len);
}
