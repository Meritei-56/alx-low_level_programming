#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - function definition
 * Description: returns pointer to a 2 dimension integer array
 * @width: grid width
 * @height: grid height
 *
 * Return: grid
 */
int **alloc_grid(int width, int height)
{
	int col;
	int rw;
	int **grid;

	if (width <= 0 || height <= 0)
	{
	return (NULL);
	}

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
	return (NULL);
	}
	for (rw  = 0; rw < height; rw++)
	{

	grid[rw] = malloc(sizeof(int) * width);
	if (grid[rw] == NULL)
	{
	for (col = 0; col < rw; col++)
	{
	free(grid[col]);
	}
	free(grid);
	return (NULL);
	}
	for (col = 0; col < width; col++)
	{
	grid[rw][col] = 0;
	}
	}
	return (grid);
}
