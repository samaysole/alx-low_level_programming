#include "main.h"

/**
 * print_alphabet_10x - prints alphabetss 10 times
 * Return:0 (void)
 */

void print_alphabet_x10(void)
{
	int x, i;

	for (i = 0; i < 10; i++)
	{
		for (x = 97; x <= 122; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
}
