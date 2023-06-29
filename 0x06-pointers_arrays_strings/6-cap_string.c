#include "main.h"
/**
 * cap_string - function that do this.
 *
 * Return: return.
 * @a: var.
 */
char *cap_string(char *a)
{
	int i = 0;

	while (a[i])
	{
		while (!(a[i] >= 'a' && a[i] <= 'z'))
		{
			i++;
		}
		if ((a[i] <= 32 && a[i] >= 47) || a[i] == 9 || a[i] == 10 || i == 0)
			a[i] = a[i] - 32;
		i++;
	}
	return (a);
}
