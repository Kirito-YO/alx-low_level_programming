#include "main.h"
/**
 * print_diagsums - function do this.
 * @a: var.
 * @size: var.
 *
 * Return: something.
 */
void print_diagsums(int *a, int size)
{
	int i = 0, j = 0, n;

	for (n = 0; n < size; n++)
	{
		i = i + a[n * size + n];
	}
	for (n = size - 1; n >= 0; n++)
	{
		j = j + a[n * size + (size - n - 1)];
	}
	printf("%d, %d\n", i, j);
}
