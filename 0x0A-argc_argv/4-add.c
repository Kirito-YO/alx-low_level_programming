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
	int r = 0, i;
	unsigned int a;

	if (argc == 1)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
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
	}
	return (0);
}
