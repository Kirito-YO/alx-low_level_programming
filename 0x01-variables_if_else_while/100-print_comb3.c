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
		int n = 49;

		do {
			if (i < n)
			{
				putchar(i);
				putchar(n);
				if (i < 57)
				{
					if (i == 56 && n == 57)
					{
						break;
					}
					else
					{
						putchar(44);
						putchar(32);
					}
				}
			}
			n++;
		} while (n < 58);
		i++;
	} while (i < 57);
	putchar('\n');
return (0);
}
