#include "main.h"
/**
 * _palindrome - fuction do this.
 * Return: something.
 * @s: var.
 * @i: var.
 * @j: var.
 */
int _palindrome(char *s, int i, int j)
{
	if (*(s + i) != *(s + j - 1))
		return (0);
	if (i >= j)
		return (1);
	return (_palindrome(s, i + 1, j - 1));
}
/**
 * _strlen - fuction do this.
 * Return: something.
 * @s: var.
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}
/**
 * is_palindrome - fuction do this.
 * Return: something.
 * @s: var.
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (_palindrome(s, 0, _strlen(s)));
}
