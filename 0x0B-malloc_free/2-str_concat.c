#include "main.h"
/**
 * str_concat - function can do that.
 * @s1: var1.
 * @s2: var2.
 *
 * Return: Nothing.
 */
char *str_concat(char *s1, char *s2)
{
	char *d;
	int a = 0, b = 0, i, j, s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[a] != 0)
		a++;
	while (s2[b] != 0)
		b++;
	s = a + b + 1;
	d = (char *) malloc(s * sizeof(char));
	if (d == 0)
		return (NULL);
	for (i = 0; *(s1 + i) != 0; i++)
		*(d + i) = *(s1 + i);
	for (j = 0; *(s2 + j) != 0; j++)
	{
		*(d + i) = *(s2 + j);
		i++;
	}
	return (d);
}
