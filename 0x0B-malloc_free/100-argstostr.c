#include "main.h"
/**
 * argstostr - function can do that.
 * @ac: var1.
 * @av: var2.
 *
 * Return: Nothing.
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int i = 0, a = 0, b = 0, j = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (a < ac)
	{
		b = 0;
		while (av[a][b] != 0)
		{
			i++;
			b++;
		}
		a++;
	}
	i = i + ac + 1;
	s = malloc(sizeof(char) * i);
	if (s == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != 0; b++)
		{
			s[j] = av[a][b];
			j++;
		}
		s[j] = '\n';
		j++;
	}
	return (s);
}
