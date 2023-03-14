#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - function definition
 * Description: frees a 2 dimensional grid
 * @grid: address of two dimensional grid
 * @height: grid height
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int m;

	for (m = 0; m < height; m++)
	{
	free(grid[m]);
	}

	free(grid);

}
