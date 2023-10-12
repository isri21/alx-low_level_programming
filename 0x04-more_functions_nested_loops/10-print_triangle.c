#include "main.h"

/**
* print_triangle - prints a right angle triangle, followed by a new line.
* @size: scale or length of the triangle.
*
* Return: void
*/
void print_triangle(int size)
{
	if (size == 0 || size < 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, k;

		for (i = 1; i <= size; i++)
		{
			int j;

			for (j = 0; j < (size - i); j++)
				_putchar(' ');

			for (k = 0; k < i; k++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
