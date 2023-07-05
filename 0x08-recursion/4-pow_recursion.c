#include "main.h"
/**
 * _pow_recursion - this function do that.
 *
 * Return: something.
 * @x: var.
 * @y: var.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
