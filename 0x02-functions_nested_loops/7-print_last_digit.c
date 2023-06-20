#include "main.h"
/**
 * print_last_digit - the absolute value
 *
 * Return: Always positif.
 *
 * @i: The character to print
 */
int print_last_digit(int i)
{
	if (i < 0)
	{
		i = i * -1;
		i = i % 10;
		_putchar('0' + i);
		return (i);
	}
	else if (i > 9)
	{
		i = i % 10;
		_putchar('0' + i);
		return (i);
	}
	else
	{
		_putchar('0' + i);
		return (i);
	}
}
