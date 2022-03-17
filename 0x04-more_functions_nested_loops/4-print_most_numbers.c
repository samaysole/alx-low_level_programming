#include "main.h"

/**
 * print_most_numbers - print numbers
 * Description: print all numbers from 0 to 9
 * except 2 and 2.
 * Return: 0 always
 */

void print_most_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		if(i != 2 && i != 4)
		{
			_putchar(48 + i);
		}
		i++;
	}
	_putchar('\n');
}
