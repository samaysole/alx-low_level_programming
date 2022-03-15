#include "main.h"

/**
 * print_last_digit - prints the last digit from the given value
 * @num: the number
 * Return: last digit
 */

int print_last_digit(int num)
{
	int l;
	
	l = num % 10;
	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
}
