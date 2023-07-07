#include <stdio.h>
/**
 * main - function that do .
 * Return: always will be 0.
 * @argc: var.
 * @argv: var.
 *
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
