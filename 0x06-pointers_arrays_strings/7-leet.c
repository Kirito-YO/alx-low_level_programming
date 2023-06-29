#include "main.h"
/**
 * leet - function that do this.
 *
 * Return: return.
 * @a: var.
 */
char *leet(char *a)
{
	int i, j;
	char s[] = "aAeEoOtTlL", ss[] = "4433007711";

	for (i = 0; a[i] != 0; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (a[i] == s[j])
				a[i] = ss[j];
		}
	}
	return (a);
}
