#include "main.h"
/**
 * alloc_grid - function can do that.
 * @width: var1.
 * @height: var2.
 *
 * Return: Nothing.
 */
int **alloc_grid(int width, int height)
{
	int **a, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	a = malloc(sizeof(int *) * height);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(int) * width);
		if (a[i] == NULL)
		{
			for (i = i - 1; i >= 0; i--)
			{
				free(a[i]);
			}
			free(a);
			return (NULL);
		}
	}
	for (i = 0; j < width; j++)
		a[i][j] = 0;
	return (a);
}
