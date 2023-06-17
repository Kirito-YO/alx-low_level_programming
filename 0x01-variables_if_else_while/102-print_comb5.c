#include <stdio.h>
/**
 ** main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 48;
	int c = 48;
	int k = 48;
	int n = 48;
	int a = 48;
	int b = 48;

	do {
		do {

        		do {
				do {
					k = a + b;
					if (c == k || c > k)
					{	
						break;
					}
					else
					{
						putchar(i);
						putchar(n);
						putchar(32);
						putchar(a);
						putchar(b);
					}
						if (i == 57 && n == 56 && a == 57 && b == 57)
						{
							break;
						}
						else
						{
							putchar(44);
							putchar(32);
						}
					b++;
				} while (b < 58);
				a++;
			} while (a < 58);
			c = i + n;
			n++;
		} while (n < 58);
		i++;
	} while (i < 58);
	putchar('\n');
return (0);
}
