#include "main.h"

/**
 * print_numbers - print numbers from 0 to 9
 * Return: 0 always
 */

void print_numbers(void)
{
	int i;
	
	i = 0;
	while (i <= 9)
	{
		_putchar(48 + i);
		i++;
	}
	_putchar('\n');
}
