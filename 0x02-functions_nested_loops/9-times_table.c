#include "main.h"
/**
 * times_table - times table.
 *
 * Return: Always 0.
 *
 */
void times_table(void)
{
	int i, ii, s;
	for (i = 0; i < 10; i++)
	{
		for (ii = 0; ii < 10; ii++)
		{
			s = i * ii;
			_putchar(s + '0');
			if (ii < 9)
			{
				_putchar(',');
				_putchar(' ');
				if (s < 9)
				{
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}	
