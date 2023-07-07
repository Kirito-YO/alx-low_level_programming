#include "main.h"
/**
 * _strspn - function do this.
 * @s: var.
 * @accept: var.
 *
 * Return: something.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	unsigned int j = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				j++;
				break;
			}
			else if (accept[i + 1] == 0)
				return (j);
		}
		s++;
	}
	return (j);
}
