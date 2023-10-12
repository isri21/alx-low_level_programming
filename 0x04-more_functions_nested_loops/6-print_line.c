#include "main.h"

/**
* print_line - draws a straight line using _ character.
* @n: number of times _ character should be used,
* determines the lenght of the line
*
* Return: void
*/
void print_line(int n)
{
	if (n == 0 || n < 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}

}
