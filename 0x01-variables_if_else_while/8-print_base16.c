#include <stdio.h>
/**
 * main - main block
 * Description: prints all the numbers of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
	int n = 0;	
	while (n < 16)
	{
		if (n < 10)
		{
			putchar(48 + n);
		}
		else
		{
			putchar(87 + n);
		}
		n++;
	}
	putchar('\n');
	return (0);
}
