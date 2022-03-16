#include "main.h"

/**
 * print_to_98 - print all natural numbers from n to 98
 * @n : the natural number
 * Return: 0
 */

void print_to_98(int n)
{
	int i, m, x, l;
	if (n < 98)
	{
		for (i = 0; i <= 98; i++)
		{
			if (i < 0)
			{
				_putchar(45);
				if (-1 * i / 10 != 0)
				{
					_putchar(-1 * i / 10 + 48);
				}
				_putchar(-1 * i % 10 + 48);
			}
			else
			{
				if (i / 10 != 0)
				{
					_putchar(i / 10 + 48);
				}
				_putchar(i % 10 + 48);
			}
			if (i < 98)
			{
				_putchar(44);
				_putchar(32);
			}
		}
	}
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i < 100)
			{
				_putchar(i / 10 + 48);
				_putchar(i % 10 + 48);
			}
			else
			{
				m = i / 100;
				_putchar(m + 48);
				x = 100 * m;
				l = i - x;
				_putchar(l / 10 + 48);
				_putchar(l % 10 + 48);
			}
			if (i > 98)
			{
				_putchar(44);
				_putchar(32);
			}
		}
	}
	else
	{
		_putchar(i / 10 + 48);
		_putchar(i % 10 + 48);
	}
	_putchar('\n');
	return (0);
}
