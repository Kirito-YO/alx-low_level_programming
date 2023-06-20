#include "main.h"
/**
 * _islower - printa a..z.
 *
 * Return: Always 0.
 *
 * @c: The character to print
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
