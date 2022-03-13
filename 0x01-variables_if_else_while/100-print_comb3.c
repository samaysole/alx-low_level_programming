#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints all possible different combinations of two digits
 * starting from 01-89 considering "01 & 10" as same followed by a new line.
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
