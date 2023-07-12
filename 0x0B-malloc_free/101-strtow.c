#include "main.h"
/**
 * strtow - function can do that.
 * @str: var1.
 *
 * Return: Nothing.
 */
char **strtow(char *str)
{
	char **s;
	int i = 0, a, b, c, d;

	if (str == NULL || str[0] == 0)
		return (NULL);
	a = number_of_words(str);
	if (a == 0)
		return (NULL);
	s = malloc(sizeof(char *) * (a + 1));
	if (s == NULL)
		return (NULL);
	for (b = 0; b < a; b++)
	{
		while (str[i] == ' ')
			i++;
		c = w_len(str + i);
		s[b] = malloc(sizeof(char) * (c + 1));
		if (s[b] == NULL)
		{
			for (; b >= 0; b--)
				free(s[b]);
			free(s);
			return (NULL);
		}
		for (d = 0; d < c; d++)
			s[b][d] = str[i++];
		s[b][d] = 0;
	}
	s[b] = NULL;
	return (s);
}
/**
 * number_of_words - function can do that.
 * @str: var1.
 *
 * Return: Nothing.
 */
int number_of_words(char *str)
{
	int i = 0, e = 0, f = 0;

	for (i = 0; *(str + i); i++)
		f++;
	for (i = 0; i < f; i++)
	{
		if (*(str + i) != ' ')
		{
			e++;
			i += w_len(str + i);
		}
	}
	return (e);
}
/**
 * _len - function can do that.
 * @str: var1.
 *
 * Return: Nothing.
 */
int w_len(char *str)
{
	int i = 0, j = 0;

	while (*(str + i) && *(str + i) != ' ')
	{
		j++;
		i++;
	}
	return (j);
}
