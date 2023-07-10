#include "main.h"
/**
 * create_array - function can do that.
 * @size: var1.
 * @c: var2.
 *
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	a = (char *) malloc(size * sizeof(c));
	if (a == 0)
	{
		return (NULL);
	}
	else
	{
		while (i < size)
		{
			*(a + i) = c;
			i++;
		}
		return (a);
	}
}
