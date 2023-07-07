#include "main.h"
/**
 * _isalpha - is alpha ?
 *
 * Return: Always 0.
 *
 * @c: The character to print
 */
int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
		return (1);
	else
		return (0);
}
