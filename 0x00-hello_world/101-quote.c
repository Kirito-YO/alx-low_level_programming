#include <stdio.h>
#include <unistd.h>
/**
 ** main - Entry point
 *
 * Return: Always 1 (Success)
 */
int main()
{
	size_of_quote=sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n") - 1;
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", size_of_quote);
	return (1);
}
