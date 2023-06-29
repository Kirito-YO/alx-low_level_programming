#include "main.h"
/**
 * rot13 - function that do this.
 *
 * Return: return.
 * @a: var.
 */
char *rot13(char *a)
{
	int i, j;
	char s[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char ss[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; a[i] != 0; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (a[i] == s[j])
				a[i] = ss[j];
		}
	}
	return (a);
}
