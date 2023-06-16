#include <stdio.h>
/**
 ** main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 48;

	do {
		putchar(i);
		if (i < 57)
		{	
			putchar(44);
			putchar(32);
		}	
		i++;
	} while (i < 58);
	putchar('\n');
return (0);
}
