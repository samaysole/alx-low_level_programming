#include "main.h"

/**
 * swap_int - is function that swaps int values
 * @a:is pointer that holds address of the firist integer
 * @b:is pointer that holds address of the second pointer
 * Return: returns swaped value
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
