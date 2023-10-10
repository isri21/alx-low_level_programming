#include "main.h"
#include <stdio.h>
/**
* print_times_table - prints the n times table, starting with 0.
* @n: table size
*
* Return: void
*/

void print_times_table(int n)
{
	int i;
	int j;

	if (!(n > 15 || n < 0))
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				printf("%d", i * j);
				if (j == n)
					continue;
				putchar(',');
				putchar(' ');
				if ((i * (j + 1)) > 99)
					continue;
				putchar(' ');
				if ((i * (j + 1)) > 9)
					continue;
				putchar(' ');
			}
			putchar('\n');
		}
	}

}
