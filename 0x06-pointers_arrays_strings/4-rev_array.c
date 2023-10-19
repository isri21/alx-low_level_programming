#include "main.h"

/**
* reverse_array - reverses the elements of an array.
* @a: the array to be reveresed
* @n: the number of elements in the array
*
* Return: void.
*/
void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < n / 2; i++)
	{
		int t = a[i];

		a[i] = a[n - 1 - i];
		a[n - 1 - i] = t;
	}
}
