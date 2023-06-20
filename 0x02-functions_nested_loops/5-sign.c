#include "main.h"
/**
 * print_sign - is alpha ?
 *
 * Return: Always 0.
 *
 * @c: The character to print
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
