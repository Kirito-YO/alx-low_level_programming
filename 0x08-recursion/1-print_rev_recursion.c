#include "main.h"
/**
 * _print_rev_recursion - this function do that.
 *
 * Return: concatenation of two strings.
 * @s: var.
 */
void _print_rev_recursion(char *s)
{
	if (*s != 0)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
