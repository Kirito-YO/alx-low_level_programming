#include "main.h"
/**
 * _realloc - function can do that.
 * @ptr: var
 * @old_size: var
 * @new_size: var
 *
 * Return: On success 0.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *a, *b;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	a = malloc(new_size);
	if (!a)
		return (NULL);
	b = ptr;
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			a[i] = b[i];
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			a[i] = b[i];
	}
	free(ptr);
	return (a);
}
