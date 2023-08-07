#include "main.h"
/**
 * read_textfile - my function
 * @filename: var
 * @letters:  var
 *
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f, n, w;
	char *b;

	b = malloc(sizeof(*b) * (letters + 1));
	if (filename == NULL || b == NULL)
	{
		free(b);
		return (0);
	}
	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	n = read(f, b, letters);
	if (n == -1)
		return (0);
	b[n] = '\0';
	w = write(STDOUT_FILENO, b, n);
	if (w != n)
		return (0);
	free(b);
	close(f);
	return (n);
}
