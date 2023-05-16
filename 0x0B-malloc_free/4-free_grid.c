#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - 2d array frees
 * @grid: 2d grid
 * @height: grid height dimension 
 * Description: grid memory frees
 * Return: nothing
 *
 */
void free_grid(int **grid, int height)
{
	int h;

	for (h = 0; h < height; h++)
	{
		free(grid[h]);
	}
	free(grid);
}
