#include "main.h"
/**
 * free_grid - function can do that.
 * @grid: var1.
 * @height: var2.
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
