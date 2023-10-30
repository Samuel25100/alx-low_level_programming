#include "main.h"
/**
 * free_grid - free the memory of 2D array
 * @grid: the 2d array pointer
 * @height: the hiegth of the grid or array
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
	free(grid[x]);
	}
	free(grid);
}
