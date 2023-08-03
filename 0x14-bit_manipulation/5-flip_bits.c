#include "main.h"
/**
 * flip_bits - function
 * @n: var
 * @m: var
 * Return: a var
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, j = 0;
	unsigned long int a;
	unsigned long int b = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		a = b >> i;
		if (a & 1)
			j++;
	}
	return (j);
}
