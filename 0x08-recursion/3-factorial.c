#include "main.h"

/**
 * factorial - factorises a given number
 * @n: given numeber
 * Return: returns factorial, -1 if n less than 0
 */

int factorial(int n)
{
	if (n < 0)
		return -1;
	else if (n == 0)
		return 1;
	else
		return n * factorial(n - 1);
}
