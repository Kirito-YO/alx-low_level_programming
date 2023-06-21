#include "main.h"
/**
 * print_to_98 - add two int
 *
 * Return: Always 0.
 *@n: the start road to 98.
 */
void print_to_98(int n)
{
	if (n < 0)
	{
		while (n != 98)
		{
			printf("%d", n);
			if (n < 98)
			{
				printf(", ");
			}
			n++;
		}
	}
	else if (n >= 0 && n < 98)
	{
		while (n != 98)
		{
			printf("%d", n);
			if (n < 98)
			{
				printf(", ");
			}
			n++;
		}
	}
	else if (n == 98)
	{
		printf("%d", n);
	}
	else 
	{
		printf("%d", n);
		if (n > 98)
		{
			printf(", ");
		}
		n--;
	}
}
