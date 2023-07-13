#include "main.h"
/**
 * string_nconcat - function can do that.
 * @s1: var
 * @s2: var
 * @n: var
 *
 * Return: On success 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, k = 0, l = 0;

	while (s1 && s1[k])
		k++;
	while (s2 && s2[l])
		l++;
	if (n < l)
		s = malloc(sizeof(char) * (k + n + 1));
	else
		s = malloc(sizeof(char) * (l + l + 1));
	if (!s)
		return (NULL);
	while (i < k)
	{
		s[i] = s1[i];
		i++;
	}
	while (n < l && i < (k + n))
		s[i++] = s2[j++];
	while (n >= l && i < (k + l))
		s[i++] = s2[j++];
	s[i] = 0;
	return (s);
}
