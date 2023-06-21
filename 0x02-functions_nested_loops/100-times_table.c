#include "main.h"
/**
 * print_times_table - times table.
 *
 * Return: Always 0.
 *
 * @n: number of time print table
 */
void print_times_table(int n)
{
	int i, ii, s;

	if (n < 16 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (ii = 0; ii <= n; ii++)
			{
				s = i * ii;
				if (ii != 0 && s < 100)
				{
					printf(",");
					printf(" ");
					if (s < 10)
						printf(" ");
				}
				printf(" ");
				printf("%d", s);
			}
			printf("\n");
		}
	}
}
