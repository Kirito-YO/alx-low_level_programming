#include "main.h"
/**
 ** main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long i, f1 = 1, f2 = 2, s;

	for (i = 0; i < 98; i++)
	{
		s = f1 + f2;
		printf("%lu", s);
		f1 = f2;
		f2 = s;
		if (i == 97)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
