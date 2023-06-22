#include "main.h"

/**
 * print_number - print integer
 *
 * @n: integer.
 */

void print_number(int n)
{
	int m = (-1);

	if (n < 0)
	{
		_putchar(45);
		n = n * m;
	}
	if (n / 10)
		print_number(n / 10);
	_putchar(n % 10 + '0');
}
