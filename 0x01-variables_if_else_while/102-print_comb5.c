#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints all possible different combinations of two two
 * digits starting from 00 01 - 98 99 - "00 01 and 01 00" are considered
 * as same numbers of 0 and 1 and finally followed by a new line.
 * Return: 0
 */
int main(void)
{
	int l, m, n, o;

	l = 0;
	while (l < 10)
	{
		m = 0;
		while (m < 10)
		{
			n = 0;
			while (n < 10)
			{
				o = 0;
				while (o < 10)
				{
					if (!(l == n && o == m))
					{
						putchar(48 + l);
						putchar(48 + m);
						putchar(' ');
						putchar(48 + n);
						putchar(48 + o);

						if ((l + m != 17) && (n + o != 18))
						{
							putchar(',');
							putchar(' ');
						}
					}
					o++;
				}
				n++;
			}
			m++;
		}
		l++;
	}
	putchar('\n');
	return (0);
}
