#include <unistd.h>

/**
 * _putchar - prints the inputted character
 * @c: an inputted character
 * Return: An unsigned char to an int
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
