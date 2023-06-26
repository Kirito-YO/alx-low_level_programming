#include "main.h"
/**
 * _strcpy - some.
 *
 * Return : the value dest.
 *
 * @dest: parameter
 * @src: parameter
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0, j = 0;

	while (*(src + i) != 0)
	{
		i++;
	}
	for ( ; j < i ; j++)
	{
		dest[j] = src[j];
	}
	dest[i] = 0;
	return (dest);
}
