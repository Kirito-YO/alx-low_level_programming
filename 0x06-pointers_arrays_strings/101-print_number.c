#include "main.h"
/**
 * print_number - function that do this.
 *
 * Return: return.
 * @n: var.
 */
void print_number(int n)
{
	unsigned int i;

	i = n;
	if (n < 0)
	{
		_putchar('-');
		i = -n;
	}
	if (i / 10 != 0)
		print_number(n1 / 10);
	_putchar((i % 10) + '0');
}
