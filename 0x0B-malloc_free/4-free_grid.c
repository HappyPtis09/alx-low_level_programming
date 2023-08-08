#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees a 2D grid previously created using alloc_grid function
 *
 * @grid: Double pointer to the 2D array of integers
 * @height: Height of the 2D grid
 *
 * Return: Nothing 
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
