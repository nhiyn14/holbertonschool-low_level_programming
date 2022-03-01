#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  * free_grid - a function that frees a 2D grid in task 3
  * @grid: the given array
  * @height:
  *
  * Description: Each grid should be 0
  *
  * Return: the 2D array of 0
  * or NULL if width OR height is <= 0
  */
void free_grid(int **grid, int height)
{
	int row = 0;

	for (row = 0; row < height; row++)
		free(grid[row]);
	free(grid);
}
