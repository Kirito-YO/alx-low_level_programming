#include "main.h"
/**
 * jack_bauer - the absolute value
 *
 * Return: Always positif.
 *
 * @i: The character to print
 */
void jack_bauer(void)
{
	int h1, h2, m1, m2;

	for (h1 = 0; h1 < 3; h1++)
	{
		for (h2 = 0; h2 < 10; h2++)
		{
			for (m1 = 0; m1 < 7; m1++)
			{
				for (m2 = 0; m2 < 10; m2++)
				{
					if (h1 == 2 && h2 == 3 && m1 == 5 && m2 < 10)
					{
						break;
					}
					_putchar(h1);
					_putchar(h2);
					_putchar(':');
					_putchar(m1);
					_putchar(m2);
					_putchar('\n');
				}
			}
		}
	}
}
