#include <stdio.h>
#include <stdlib.h>

/**
* alloc_grid - creates a 2D array of int
* @width: width or row of the array
* @height: heigth or column of the array
*
* Return: pointer to a 2D array
*/
int **alloc_grid(int width, int height)
{
	/* Declare variables to be used for C90 style */
	int **arr, i, j;
	/* checks if width or height is 0, if they are return NULL*/
	if (width <= 0 || height <= 0)
		return (NULL);
	/* first create the main array of pointers (the first column) */
	arr = malloc(sizeof(int *) * height);
	/* if malloc fails return NULL and free everything*/
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	/* create the 2nd array for each element in the first column */
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		/* if malloc fails return NULL and free every thing */
		if (arr[i] == NULL)
		{
			for (i = 0; i < width; i++)
				free(arr[i]);
			free(arr);
			return (NULL);
		}
	}
	/* Initialize every element of the array with a value of 0 */
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	/* reutrn the pointer to newly created 2D array to the caller */
	return (arr);
}
