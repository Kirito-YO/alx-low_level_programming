#include "main.h"
/**
 * _strncpy - concatenate two strings.
 *
 * Return: concatenation of two strings.
 * @dest: first string.
 * @src: seconde string.
 * @n: int.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != 0 && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = 0;
		i++;
	}
	return (dest);
}
