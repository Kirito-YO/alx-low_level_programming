#include <stdio.h>
/**
 * main - function that do .
 * Return: always will be 0.
 * @argc: var.
 * @argv: var.
 *
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int i = 0;

	if (argc > 1)
	{
		i = argc - 1;
		printf("%d\n", i);
	}
	else
	{
		printf("%d\n", i);
	}
	return (0);
}
