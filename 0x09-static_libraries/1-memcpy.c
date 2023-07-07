#include "main.h"
/**
 * _memcpy - memory with a constant byte.
 * @dest: var.
 * @src: var.
 * @n: var.
 *
 * Return: dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0, j;

	j = n;
	while (i < j)
	{
		dest[i] = src[i];
		n--;
		i++;
	}
	return (dest);
}
