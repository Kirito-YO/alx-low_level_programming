#include "main.h"
/**
 * _strstr - function do this.
 * @haystack: var.
 * @needle: var.
 *
 * Return: something.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != 0)
	{
		char *a = haystack, *b = needle;

		while (*a == *b && *b != 0)
		{
			a++;
			b++;
		}
		if (*b == 0)
			return (haystack);
		haystack++;
	}
	return (0);
}
