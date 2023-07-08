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
	 int r = 0, i, j, a;

	if (argc == 1 || argc == 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != 0; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		a = atoi(argv[i]);
		r = r + a;
	}
	printf("%d\n", r);
	return (0);
}
