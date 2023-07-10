#include "main.h"
/**
 * _strdup - function can do that.
 * @str: var1.
 *
 * Return: Nothing.
 */
char *_strdup(char *str)
{
	char *a;
	int s = 0, i = 0;


	if (str == 0)
	{
		return (NULL);
	}
	while (str[s] != 0)
	{
		s++;
	}
	s++;
	a = (char *) malloc(s * sizeof(char));
	if (a == 0)
	{
		return (NULL);
	}
	while (str[i] != 0)
	{
		a[i] = str[i];
		i++;
	}
	a[i] = '\0';
	return (a);
}
