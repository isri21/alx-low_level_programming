#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - executes a function given as a parameter on
 * each element of an array.
 * @array: array to iterate through
 * @size: Size of array
 * @action: Function to execute on each element of the array
 *
 * Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action == NULL || array == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]); /* passes each element to the funcion pointer */
}
