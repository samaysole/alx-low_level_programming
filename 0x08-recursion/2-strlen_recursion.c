#include "main.h"

/**
 * _strlen_recursion - counts the length of the given string
 * @s: input string
 * Return: returns the length of the string
 */

int _strlen_recursion(char *s)
{
	int c = 1;

	if (s[c] == '\0')
	{
		return (1);
	}
	return (c + _strlen_recursion(s + 1));
}
