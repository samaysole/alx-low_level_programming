#include <stdio.h>
/**
 * main - main block
 * Description: prints from 0-9 single base 10 digit numbers
 * Return: 0
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		printf("%d", n);
		n++;
	}

	return (0);
}
