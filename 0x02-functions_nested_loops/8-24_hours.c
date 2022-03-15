#include "main.h"

/**
 * jack_bauer - display the minutes of a day
 * Return:0
 */

void jack_bauer(void)
{
	int u, v, w, x, n;

	for (u = 0; u <= 2; u++)
	{
		if (u == 2)
		{
			n = 3;
		}
		else
		{
			n = 9;
		}
		for (v = 0; v <= n; v++)
		{
			for (w = 0; w <= 5; w++)
			{
				for (x = 0; x <= 9; x++)
				{
					_putchar(48 + u);
					_putchar(48 + v);
					_putchar(':');
					_putchar(48 + w);
					_putchar(48 + x);
					_putchar('\n');
				}
			}
		}
	}
}
