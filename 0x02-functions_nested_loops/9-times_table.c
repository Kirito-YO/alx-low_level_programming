#include "main.h"
/**
 * times_table - times table.
 *
 * Return: Always 0.
 *
 */
void times_table(void)
{
	int i, ii, s, ss;
	for (i = 0; i < 10; i++)
	{
		for (ii = 0; ii < 10; ii++)
		{
			s = i * ii;
			if (i != 0)
			{
				_putchar(' ');
				_putchar(',');
			}
			if (s > 9)
			{
				ss = s % 10;
				s = s / 10;
				_putchar(s + '0');
				_putchar(ss + '0');
			}
			else
			{
				_putchar(s + '0');
			}
		}
		_putchar('\n');
	}
}	
