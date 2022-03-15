#include "main.h"

/**
 * _islower - shows 1 if the given character is
 * lowercase. another cases, shows 0
 *  
 * @c: The character in ASCII code
 *
 * Returns:1 for lowercase character. 0 for another.
 *
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
