#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints all possible different combinations of three digits starting 
 * from 012-789 considering "012,120,102,021,201,210" are  considered 
 * as same and finally followed by a new line.
 * Return: 0
 */
int main(void)
{
	int n, m, o;
	n = 0;
	while (n < 8)
	{
		m = n + 1;
		while (m < 9)
		{
			o = m + 1;
			while (o < 10)
			{
				putchar(48 + n);
				putchar(48 + m);
				putchar(48 + o);

				if (n + m + o != 24)
				{
					putchar(',');
					putchar(' ');
				}
				o++;
			}
			m++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
