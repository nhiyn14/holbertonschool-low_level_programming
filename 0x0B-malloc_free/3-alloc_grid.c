#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  * **alloc_grid - a function returns a pointer to a 2d array of int
  * @width: string of width int
  * @height: string of height int
  *
  * Description: Each grid should be 0
  *
  * Return: the 2D array of 0
  * or NULL if width OR height is <= 0
  */
int **alloc_grid(int width, int height)
{
	int **grid;
	int row = 0;
	int column = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	for (row = 0; row < height; row++)
	{
		grid[row] = malloc(sizeof(int) * width);
		if (grid[row] == NULL)
		{
			for (row = 0; row < height; row++)
				free(grid[row]);
			free(grid);
			return (NULL);
		}
		for (column = 0; column < width; column++)
			grid[row][column] = 0;
	}
	return (grid);
}
