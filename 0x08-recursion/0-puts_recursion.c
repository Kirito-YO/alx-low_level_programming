#include "main.h"
/**
 * _puts_recursion - this function do that.
 *
 * Return: concatenation of two strings.
 * @s: var.
 */
int i = 0;

void _puts_recursion(char *s)
{
	_putchar(s[i]);
	i++;
	if (s[i] != 0)
		_puts_recursion(s);
	else if (s[i] == 0)
		_putchar('\n');
}
