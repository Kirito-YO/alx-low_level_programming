#include "main.h"
/**
 * _strlen_recursion - this function do that.
 *
 * Return: something.
 * @s: var.
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != 0)
	{
		i++;
		i = i + _strlen_recursion(s + 1);
	}
	return (i);
}
