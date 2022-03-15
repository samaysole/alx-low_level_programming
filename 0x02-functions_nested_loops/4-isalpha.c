#include "main.h"

/**
 * _isalpha - check for  alpha case letter
 * @c : character to check the case
 * Return:0 or 1
 */

int _isalpha(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else if (c > 64 && c < 91)
	{
		return (1)
	else
	{
		return (0);
	}
	_putchar('\n');
}
