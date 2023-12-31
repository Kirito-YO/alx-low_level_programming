#include "main.h"
/**
 * _strcat - concatenate two strings.
 *
 * Return: concatenation of two strings.
 * @dest: first string.
 * @src: seconde string.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != 0)
	{
		i++;
	}
	while (src[j] != 0)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = 0;
	return (dest);
}
