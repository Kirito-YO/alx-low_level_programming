#include "main.h"
/**
 * _strchr - function do this.
 * @s: var.
 * @c: var.
 *
 * Return: c or null.
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] >= 0)
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (0);
}
