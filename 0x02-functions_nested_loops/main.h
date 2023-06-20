#include <stdio.h>

void NewPutchar(char string[]);
void print_alphabet(void);
int _putchar(char c);
void NewPutchar(char string[])
{
	printf("%s", string);
}

void print_alphabet(void)
{
	int i = 97;
	
	do {
		_putchar(i);
		i++;
	} while (i < 123);
	_putchar('\n');
}
