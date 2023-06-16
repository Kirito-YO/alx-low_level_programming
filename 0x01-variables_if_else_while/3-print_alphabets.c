#include <stdio.h>
/**
 ** main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	char *c = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	do {
		putchar(c[i]);
		i++;
	} while (c[i] != 0);
	putchar('\n');
return (0);
}
