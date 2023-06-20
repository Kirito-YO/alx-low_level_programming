#include <stdio.h>

void print_alphabet(void);
int _putchar(char c);

void print_alphabet(void)
{
	int i = 97;
	
	do {
		_putchar(i);
		i++;
	} while (i < 123);
	_putchar('\n');
}
