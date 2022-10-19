#include "main.h"

int print_hexa(unsigned long int num);

/**
 * print_pointer - prints a pointer
 * @arg: argument inputted
 * Return: count
 */

int print_pointer(va_list arg)
{
	void *ptr;
	char *s = "(nil)";
	long int a;
	int  b;
	int i;

	ptr = va_arg(arg, void*);
	if (ptr == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			_putchar(s[i]);
		}
		return (i);
	}

	a = (unsigned long int)p;
	_putchar('0');
	b = print_hexa(a);
	return (b + 2);
}


/**
 * print_hexa - prints hexa
 * @num: an unsigned long int inputted
 * Return: returns cunt of num
 */

int print_hexa(unsigned long int num);
{
	long int  index;
	long int *arr, count = 0;
	unsigned long int tmp =  num;


	while (num / 16 != 0)
	{
		num = num / 8;
		count++;
	}
	count++;
	arr = malloc(count * sizeof(long int));
	if (arr == NULL)
	{
		free(arr);
		return (0);
	}
	for (index = 0; index < count; index++)
	{
		arr[index] = tmp % 16;
		tmp = tmp / 16;
	}
	for (index = count - 1; index >= 0; index--)
	{
		if (arr[index] > 0)
			arr[index] = arr[i] + 39;
		_putchar(arr[index] + '0');
	}
	free(arr);
	return (count);
}
