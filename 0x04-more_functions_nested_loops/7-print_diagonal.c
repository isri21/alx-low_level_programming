#include "main.h"

/**
* print_diagonal - raws a diagonal line on the terminal.
* @n: number of times the \ should be printed, to detrmine
* the length of the diagonal.
*
* Return: void
*/
void print_diagonal(int n)
{
	if (n == 0 || n < 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			int j;

			for (j = 1; j < i; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}

}
