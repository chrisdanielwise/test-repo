#include "main.h"

/**
 * print_bin - A function that prints a binary value
 * @arg: argument to be inputted
 * Return: returns count of value
 */
int print_bin(va_list arg)
{
	unsigned int num;
	int  index;
	int *arr, count = 0;
	unsigned int tmp;


	num = va_arg(arg, unsigned int);

	while (num / 2 != 0)
	{
		num = num / 2;
		count++;
	}
	count++;
	arr = malloc(count * sizeof(int));
	if (arr == NULL)
	{
		free(arr);
		return (0);
	}
	tmp = num;
	for (index = 0; index < count; index++)
	{
		arr[index] = tmp % 2;
		tmp = tmp / 2;
	}
	for (index = count - 1; index >= 0; index--)
	{
		_putchar(arr[index] + '0');
	}
	free(arr);
	return (count);
}

/**
 * print_oct - A function that prints an octal value
 * @arg: argument to be inputted
 * Return: returns count of value
 */
int print_oct(va_list arg)
{
	unsigned int num;
	int  index;
	int *arr, count = 0;
	unsigned int tmp;


	num = va_arg(arg, unsigned int);

	while (num / 8 != 0)
	{
		num = num / 8;
		count++;
	}
	count++;
	arr = malloc(count * sizeof(int));
	if (arr == NULL)
	{
		free(arr);
		return (0);
	}
	tmp = num;
	for (index = 0; index < count; index++)
	{
		arr[index] = tmp % 8;
		tmp = tmp / 8;
	}
	for (index = count - 1; index >= 0; index--)
	{
		_putchar(arr[index] + '0');
	}
	free(arr);
	return (count);
}
