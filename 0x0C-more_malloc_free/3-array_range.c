#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers,
 * Description: array created should contain all the values from min (included)
 * to max (included), ordered from min to maxarray created should
 * contain all the values from min (included) to max (included),
 * ordered from min to max.
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to the array
*/
int *array_range(int min, int max)
{
	int i, j, size; /* variable declarations */
	int *arr;

	if (min > max) /* if min is greater than max return NULL */
		return (NULL);

	/*if min is 0 the size of the array should be 1+ the max value*/
	if (min == 0)
		size = max + 1;
	else /*else size is difference between rangses + 1 */
		/* absoute value to account for negative ranges*/
		size = abs((max - min) + 1);

	arr = malloc(sizeof(int) * size); /* allocate size */
	if (arr == NULL) /*if malloc fails return NULL */
		return (NULL);

	j = min;
	/* initialize the array to the range of min and max */
	for (i = 0; i < size; i++)
	{
		arr[i] = j;
		j++;
	}

	return (arr);
}
