#include <stdio.h>

/* main : main blok that proints all the natural number
 * of the sum of all mltiples of 3 & 5 below 1024
 * Return: 0 Always success
 */

int main()
{
	int sum, i;
		
	sum = 0;
	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return 0;
}
