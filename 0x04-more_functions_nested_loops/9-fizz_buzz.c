#include <stdio.h>

/**
 * main - print fizz buzz
 *
 * Description: prints the numbers from 1 to 100, but
 * for multiples of 3 print Fizz for 5 Buzz and for
 * multiples of 5 and 3 it prints FizzBuzz
 * Return: void
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", n);
		}
		if (n != 100)
		{
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
