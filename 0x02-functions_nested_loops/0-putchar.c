#include "main.h"

/**
 * main - main block
 * Description: print _putchar followd by new line
 * Return: 0
 **/
int main(void)
{
	int str[]= {95, 112, 117, 116, 99, 104, 97, 114}
	int c, s;

	s = sizeof(str) / sizeof(int);

	for (c = 0; c < s; c++)
	{
		_putchar(str[c]);
	}
	_putchar('\n');
	return (0);
}
