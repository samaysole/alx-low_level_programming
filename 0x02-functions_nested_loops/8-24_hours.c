#include "main.h"

/**
 * jack_bauer - display the minutes of a day
 * Return:0
 */

void jack_bauer(void)
{
	int u, v, w, x;

	for (u = 0; u <= 2; u++)
	{
		for (v = 0; v <= 9; v++)
		{
			for (w = 0; w <= 5; w++)
			{
				for (x = 0; x <= 9; x++)
				{
					if (u <= 2 && v <= 3)
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
}
