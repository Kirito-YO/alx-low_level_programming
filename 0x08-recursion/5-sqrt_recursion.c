#include "main.h"
/**
 * _sqrt - fuction do this.
 * Return: something.
 * @n: var.
 * @i: var.
 */
int _sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}
/**
 * _sqrt_recursion - fuction do this.
 * Return: something.
 * @n: var.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 0));
}
