#include "main.h"
/**
 * _memset - memory with a constant byte.
 * @s: var.
 * @b: var.
 * @n: var.
 *
 * Return: Nothing.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	do {
		s[i] = b;
		n--;
		i++;
	} while (n > 0)
}
