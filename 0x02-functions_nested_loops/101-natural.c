#include "main.h"
/**
 ** main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, m = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			m = m + i;
	}
	printf("%d", m);
	return (0);
}
