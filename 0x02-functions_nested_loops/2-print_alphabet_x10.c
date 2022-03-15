#include "main.h"

/**
 * print_alphabet_10x - is a block that prints all alphabets
 * in lowercases 10 times and followed with new line.
 * Return: Always 0 (success)
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
