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
			int c = 50;

			do {
				if (i < n && n < c)
				{
					putchar(i);
					putchar(n);
					putchar(c);
					if (i == 55 && n == 56 && c  == 57)
					{
						break;
					}
					else
					{
						putchar(44);
						putchar(32);
					}
				}
				c++;
			} while (c < 58);
			n++;
		} while (n < 57);
		i++;
	} while (i < 56);
	putchar('\n');
return (0);
}
