#include "main.h"
/**
 * print_alphabet - printa a..z.
 *
 * Return: Always 0.
 *
 */
void print_alphabet_x10(void)
{
	int i;
	for (i=0 ; i < 10; i++)
	{
		int n = 97;
		
		do {
			_putchar(n);
			n++;
		} while (n < 123);
		_putchar('\n');
	}
}
