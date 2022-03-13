#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: 0
 */
int main(void)
{
	int m;
	int n;

	n = 0;

	while (n < 9)
	{
		m = n + 1;
		while (m < 10)
		{
			putchar(48 + n);
			putchar(48 + m);

			if (n + m != 17)
			{
				putchar(',');
				putchar(' ');
			}
			m++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
