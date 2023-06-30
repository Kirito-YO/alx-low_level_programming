#include "main.h"
/**
 * print_number - function that do this.
 *
 * Return: return.
 * @n1: var.
 * @n2: var.
 * @r: var.
 * @size_r: var.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	unsigned int i;

	i = n;
	if (n < 0)
	{
		_putchar('-');
		i = -n;
	}
	if (i / 10 != 0)
		print_number(i / 10);
	_putchar((i % 10) + '0');
}
