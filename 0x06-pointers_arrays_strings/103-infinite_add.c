#include "main.h"
/**
 * infinite_add - function that do this.
 *
 * Return: return.
 * @n1: var.
 * @n2: var.
 * @r: var.
 * @size_r: var.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int e = 0, i = 0, j = 0, d = 0, s = 0, ss = 0, l = 0;

	while (*(n1 + i) != 0)
		i++;
	while (*(n2 + j) != 0)
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || e == 1)
	{
		if (i < 0)
			s = 0;
		else
			s = *(n1 + i) - '0';
		if (j < 0)
			ss = 0;
		else
			ss = *(n2 + j) - '0';
		l = s + ss + e;
		if (l >= 10)
			e = 1;
		else
			e = 0;
		if (d >= (size_r - 1))
			return (0);
		*(r + d) = (l % 10) + '0';
		d++;
		j--;
		i--;
	}
	if (d == size_r)
		return (0);
	*(r + d) = 0;
	_rev(r);
	return (r);
}
/**
 * _rev - reverse array
 * @str: var.
 */
void _rev(char *str)
{
	int i = 0, j = 0;
	char k;

	while (*(str + i) != 0)
	{
		i++;
	}
	i--;
	for (j = 0; j < i; j++, i--)
	{
		k = *(str + j);
		*(str + j) = *(str + i);
		*(str + i) = k;
	}
}
