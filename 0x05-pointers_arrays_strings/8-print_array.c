#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* print_array - prints n elements of an array that is specified
* by the user.
* @a: the string to print
* @n: number of elements of the string to print.
*
* Return: void
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i == n - 1)
			continue;
		printf(", ");
	}
	putchar('\n');

}
