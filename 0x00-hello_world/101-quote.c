#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Return:1
 */
int main(void)
{
	unsigned int n;
	char ch[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	n = 0;
	while (n < sizeof(ch))
	{
		putchar(ch[n]);
		n++;
	}
	putchar('\n');
	return (1);
}
