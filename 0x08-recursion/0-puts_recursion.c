#include "main.h"
/**
 * _puts_recursion - this function do that.
 *
 * Return: concatenation of two strings.
 * @s: var.
 */
void _puts_recursion(char *s)
{
	int i = 0;

	_putchar(s[i]);
	if (s[i] != 0)
		_puts_recursion(s);
}
