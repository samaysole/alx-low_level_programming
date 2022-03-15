#include "main.h"

/**
 * _islower - returns 1 if the given character is
 * lower case.
 * and returns 0 if the given character is upper or something else
 *
 */

int _islower(int c)
{
	int c;

	if (c > 96 && c < 123)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}	
