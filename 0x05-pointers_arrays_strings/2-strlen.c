#include "main.h"
/**
 * _strlen - is a funtion that.
 *
 * Return : lenght.
 *
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
