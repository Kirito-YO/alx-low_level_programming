#include "main.h"
/**
 ** main - Entry point
 * fibonacci - print fibonacci number
 * Return: Always 0 (Success)
 */
int fibonacci(int n)
{
	if (n <= 1)
		return n;
	return fibonacci(n - 1) + fibonacci(n - 2);
}
int main(void)
{
	int i, r;

	for (i = 0; i < 50; i++)
	{
		r = fibonacci(i);
		printf("%d, ", r);
	}
	printf("\n");
	return (0);
}
