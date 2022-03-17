#include "main.h"

/**
 * print_number - print numbers from 0 to 9
 * Return: 0 always
 */

void print_numbers(void)
{
	int i;
	
	i = 0;
	while (i <= 9)
	{
		_putchar(48 + i);
	}
	_putchar('\n');
	return (0);
}
