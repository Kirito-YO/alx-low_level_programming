#include "main.h"
/**
 * print_to_98 - add two int
 *
 * Return: Always 0.
 *
 */
void print_to_98(int n)
{
	int m, l;

	do {
		if (n < 9 && n < 98)
		{
			m = n / 10; 
			l = n % 10;
			_putchar(m);
			_putchar(l);
			n++;
		}
		else if (n => 0 && n < 10)
		{
			_putchar(n);
			n++;
		}
		else if (n < 0 && n > -10)
		{
			_putchar(n);
			n++;
		}
		else if (n > 98)
		{
			m = n / 10;
			l = n % 10;
			_putchar(m);
			_putchar(l);
			n--;
		}
		else
		{
			m = n / 10;
			l = n % 10;
			_putchar(m);
			_putchar(l);
			n++;
		}
		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	} while (n != 98);
}
