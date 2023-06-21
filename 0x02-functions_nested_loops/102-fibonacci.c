#include "main.h"
/**
 ** main - Entry point
 * 
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, f1 = 0, f2 = 1, s;

	for (i = 0; i < 50; i++)
	{
		s = f1 + f2;
		printf("%d", s);
		f1 = f2;
		f2 = S;
		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
