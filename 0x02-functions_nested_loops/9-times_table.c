#include "main.h"

/**
 * times_table - prints times table of 9
 * Return: void (0) Always success
 */

void times_table(void)
{
	int a = 0;
	int b;
	int op;
	
	while (a <= 9)
	{
		b = 0;
		while (b <= 9)
		{
			op = a * b;
			if (b == 0)
			{
				_putchar('0' + op);
			}
			else if (rep < 10)
			{
				_putchar(' ');
				_putchar('0' + rep);
			}
			else
			{
				_putchar('0' + rep / 10);
				_putchar('0' + rep % 10);
			}
			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			b++;
		}
		_putchar('\n');
		a++;
	}
}
