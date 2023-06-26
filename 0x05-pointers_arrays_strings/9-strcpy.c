#include "main.h"
/**
 * _strcpy - some.
 *
 * Return : char.
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
	for ( ; j < l ; j++)
	{
		dest[j] = src[j];
	}
	dest[i] = 0;
	return (dest);
}
