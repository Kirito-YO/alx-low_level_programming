#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - function that do .
 * Return: always will be 0.
 * @argc: var.
 * @argv: var.
 *
 */
int main(int argc, char *argv[])
{
	int i, j, r = 0;
	int c[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	if (i < 0)
	{
		printf("0\n");
		return (0);
	}
	for (j = 0; j < 5 && i >= 0; j++)
	{
		while (i >= c[j])
		{
			r++;
			i -= c[j];
		}
	}
	printf("%d\n", r);
	return (0);
}
