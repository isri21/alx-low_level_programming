#include "main.h"
#include <stdlib.h>

/**
* free_grid - frees a 2D array previously created in grid
* @grid: the 2D array to be cleared
* @height: number of rows on the 2D array
*
* Return: void
*/
void free_grid(int **grid, int height)
{
	/* initialize counter for loop */
	int i;

	/* first free all the 2nd arrays or the rows of the arrays */
	for (i = 0; i < height; i++)
		free(grid[i]);

	/* then free the column of the array */
	free(grid);
}
