#include <stdio.h>
#include "main.h"

/**
 * print_array - prints the elements of array
 * @a: holds the adresses of the array
 * @n: holds the size of the array
 * Return: 0
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i < n -1)
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}

