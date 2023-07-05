#include "main.h"
/**
 * factorial - this function do that.
 *
 * Return: something.
 * @n: var.
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
