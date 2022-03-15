#include "main.h"

/**
 * main - main block
 * Description: print _putchar followd by new line
 * Return: 0
 **/
int main(void)
{
	char c[8] = "_putchar";
	int n;
	n = 0;
	while (n < 9)
	{
		_putchar(c[n]);
		n++;
	}
	_putchar('\n');
	return (0);
}
