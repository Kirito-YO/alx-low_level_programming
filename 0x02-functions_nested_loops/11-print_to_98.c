#include "main.h"
/**
 * print_to_98 - add two int
 *
 * Return: Always 0.
 *
 */
void print_to_98(int n)
{
	do {
		if (n < 98)
		{
			_putchar(n);
			n++;
		}
		else
		{
			_putchar(n);
			n--;
		}
	} while (n != 98);
}
