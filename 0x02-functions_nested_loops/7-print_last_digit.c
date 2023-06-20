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
	i = i % 10;
	_putchar(i + '0');
	return (i);
}
