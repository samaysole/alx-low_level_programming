#include "main.h"

/**
 * _islower - check for lowercase letter
 * @c: The character in ASCII code
 * Returns: 1 and 0 
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
