#include "main.h"
/**
 * _prime - fuction do this.
 * Return: something.
 * @n: var.
 * @i: var.
 */
int _prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (_prime(n, i - 1));
}
/**
 * is_prime_number - fuction do this.
 * Return: something.
 * @n: var.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime(n, n - 1));
}
