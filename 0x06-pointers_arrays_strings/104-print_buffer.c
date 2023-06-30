#include "main.h"
/**
 * print_buffer - function that do this.
 *
 * Return: return.
 * @b: var.
 * @size: var.
 */
void print_buffer(char *b, int size)
{
	int a = 0, j, i;

	if (size <= 0)
		printf("\n");
	while (a < size)
	{
		j = size - a < 10 ? size - a : 10;
		printf("%08x: ", a);
		for (i = 0; i < 10; i++)
		{
			if (i < j)
				printf("%02x", *(b + a + i));
			else
				printf("  ");
			if (i % 2)
				printf(" ");
		}
		for (i = 0; i < j; i++)
		{
			int c = *(b + a + i);

			if (c < 32 || c > 132)
				c = '.';
			printf("%c", c);
		}
		printf("\n");
		a += 10;
	}
}
