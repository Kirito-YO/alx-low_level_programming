#include "main.h"
/**
 * strlen - length.
 * _strlen - length.
 *
 * Return : always 0.
 * @s: parameter
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != 0)
	{
		i++;
		s++;
	}
	return (i);
}
