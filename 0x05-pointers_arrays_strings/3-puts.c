#include "main.h"
/**
 * _puts - prints a string followd by new line.
 *
 * Return : stdout.
 * @str: parameter
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
	return (str);
}
