#include "main.h"

/**
 * print_sign - check for the value
 * @n : sign to check the value
 * Return:0 if zero,  1 if greater than 0, or -1 if less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
	_putchar('\n');
}
