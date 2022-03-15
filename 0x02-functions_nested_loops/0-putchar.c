#include "main.h"

/**
 * main - main block
 * Description: print _putchar followd by new line
 * Return: 0
 **/
int main(void)
{
       int c[] = "_putchar";
       int n,s;
       
       s = sizeof(c) / sizeof(int);
       for (n = 0; n < s; n++)
       {
	       _putchar(c[n]);
	       n++;
       }
       _putchar('\n');
       return (0);
}
