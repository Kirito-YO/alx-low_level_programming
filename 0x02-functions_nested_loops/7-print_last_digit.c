#include <limits.h>
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
	if (i == INT_MIN)
	{
		i = -1 * (INT_MIN % 10);
	}
	else if (i < 0)
	{
		i = i * -1;
	}
	i = i % 10;
	_putchar('0' + i);
	return (i);
}
