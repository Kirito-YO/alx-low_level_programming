#include "main.h"
/**
 * _memset - memory with a constant byte.
 * @s: var.
 * @b: var.
 * @n: var.
 *
 * Return: s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		n--;
		i++;
	}
	return (s);
}
