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
	 int r = 0, i, a, b;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	b = (int)(argc);
	for (i = 1; i < b; i++)
	{
		a = atoi(argv[i]);
		if (!isdigit(*argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			r = r + a;
		}
	}
	printf("%d\n", r);
	return (0);
}
