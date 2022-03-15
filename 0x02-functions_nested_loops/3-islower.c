#include "main.h"

/**
 * _islower - to check whither it is lowercase or not
 * 
 * @c returns 1 if the given character is
 * lower case.
 * 
 * @c returns 0 if the given character is upper or something else
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
