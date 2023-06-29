#include "main.h"
/**
 * leet - function that do this.
 *
 * Return: return.
 * @a: var.
 */
char *leet(char *a)
{
	int i = 0, j = 0;
	char s[] = "aAeEoOtTlL", ss[] = "4433007711";

	while (a[i] != 0)
	{
		while (j < 10)
		{
			if (a[i] == s[j])
				a[i] = ss[j];
			j++;
		}
		i++;
	}
	return (a);
}
