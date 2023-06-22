#include "main.h"
/**
 * print_number - check the code
 *
 * Return: null.
 * @n: integer.
 */
void print_number(int n)
{
	int m = -1;

	if (n < 0)
	{
		_putchar('-');
		n = n * m;
	}
	if (n / 10)
		print_number(n / 10);
	_putchar((n % 10) + '0');
}
