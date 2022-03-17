#include "main.h"

/**
 * print_numbers - print numbers
 * Return: 0 always
 */

void print_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		_putchar(48 + i);
		i++;
	}
	_putchar('\n');
}
