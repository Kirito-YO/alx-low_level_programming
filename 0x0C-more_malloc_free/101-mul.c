#include "main.h"
/**
 * main - function can do that.
 * @argc: var
 * @argv: var
 *
 * Return: On success 0.
 */
int main(int argc, char *argv[])
{
	char *a, *b;
	int i, j, k, l, n, ii, jj, *kk, iii = 0;

	a = argv[1], b = argv[2];
	if (argc != 3 || !isdigit(a) || !isdigit(b))
	{
		printf("Error\n");
		exit(98);
	}
	i = strlen(a);
	j = strlen(b);
	k = i + j + 1;
	kk = malloc(sizeof(int) * k);
	if (!kk)
		return (1);
	for (l = 0; l <= i + j; l++)
		kk[l] = 0;
	for (i = i - 1; i >= 0; i--)
	{
		ii = a[i] - '0';
		n = 0;
		for (j = strlen(b) - 1; j >= 0; j--)
		{
			jj = b[j] - '0';
			n += kk[i + j + 1] + (ii * jj);
			kk[i + j + 1] = n % 10;
			n /= 10;
		}
		if (n > 0)
			kk[i + j + 1] += n;
	}
	for (l = 0; l < k - 1; l++)
	{
		if (kk[l])
			iii = 1;
		if (iii)
			_putchar(kk[l] + '0');
	}
	if (!iii)
		_putchar('0');
	_putchar('\n');
	free(kk);
	return (0);
}
