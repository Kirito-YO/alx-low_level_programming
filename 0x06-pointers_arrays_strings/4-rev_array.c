#include "main.h"
/**
 * reverse_array - function that do this.
 *
 * Return: return.
 * @a: var1.
 * @n: var2.
 */
void reverse_array(int *a, int n)
{
	int i = 0, j;

	while (i < n--)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j
		i++;
	}
}
