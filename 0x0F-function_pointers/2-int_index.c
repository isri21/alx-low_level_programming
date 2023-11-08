#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - searchs for an integer
 * @array: array to search in
 * @size: size of the array
 * @cmp: fuction pointer used to compare values
 *
 * Return: index of the element that matches, else -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		/**
		 * returns the index of the first element for which the
		 * cmp function does not return 0
		 */
		if (cmp(array[i]) != 0)
			return (i);
	}
	/* returns -1 if no elements match */
	return (-1);
}
