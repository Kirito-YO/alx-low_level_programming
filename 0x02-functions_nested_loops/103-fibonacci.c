#include "main.h"
/**
 ** main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long i, f1 = 0, f2 = 2, s, n = 0;

	for (i = 0; i < 50; i++)
	{
		if (f1 < 4000000 && (j % 2) == 0)
			n = n + f1;
		s = f1 + f2;
		f1 = f2;
		f2 = s;
	}
	printf("%lu\n" n);
	return (0);
}
