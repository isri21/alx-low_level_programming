#include "main.h"
#include <stdio.h>

/**
* print_diagsums - prints sum of two diagonal of square matrix
* @a: pointer to the matrix
* @size: size of the matrix
*
* Return: void
*/
void print_diagsums(int *a, int size)
{
	int i, j, x = 0, y = 0;

	for (i = 0; i <= (size * size); i = i + size + 1)
		x += a[i];

	for (j = size - 1; j <= (size * size) - size; j = j + size - 1)
		y += a[j];

	printf("%d, %d\n", x, y);
}
