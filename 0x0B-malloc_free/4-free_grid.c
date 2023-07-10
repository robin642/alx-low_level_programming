#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - The frees 2d array
 * @grid: The 2d grid
 * @height: The height dimension of grid
 * Description: The frees memory of grid
 * Return: nothing
 *
 */

void free_grid(int **grid, int height)

{
		int r;

		for (r = 0; r < height; r++)
		{
			free(grid[r]);
		}
			free(grid);
}
