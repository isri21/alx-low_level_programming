#include "main.h"

/**
* swap_int -  swaps the values of two integers.
* @a: one of the number to be swap.
* @b: second number to be swap.
*
* Return: void
*/
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
