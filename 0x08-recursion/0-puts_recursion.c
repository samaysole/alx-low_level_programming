#include "main.h"

/**
 * _puts_recursion - a recursion that prints a string
 * @s: input string
 * Return: void
 */

void _puts_recursion(char *s)
{
	int c = 0;

	if (s[c] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[c]);
	_puts_recursion(s + 1);
}
