#include "main.h"
/**
 * get_bit - function
 * @n: var
 * @index: var
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int i;

	if (index > 63)
		return (-1);
	i = (n >> index) & 1;
	return (i);
}
