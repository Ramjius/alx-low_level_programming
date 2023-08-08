#include "main.h"
#include <stdlib.h>

/**
* free grid - frees grid 
* @grid: grid
* @height: height
*
* Return: NULL
*/

int **alloc_grid(int width, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
