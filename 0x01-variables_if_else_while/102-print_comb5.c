#include <stdio.h>
/**
 ** main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0, j = 1;

	do {
		j = 1;
		do {
			if (i != j)
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(32);
				putchar((j / 10) + '0');
				putchar((j % 10) + '0');
				if (i < 99 && j < 100)
				{
					putchar(44);
					putchar(32);
				}
			}
			j++;
		} while (j < 100);
		i++;
	} while (i < 100);
	putchar('\n');
	return (0);
}
