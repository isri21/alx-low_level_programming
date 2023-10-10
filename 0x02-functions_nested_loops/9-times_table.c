#include "main.h"
#include <stdio.h>
/**
* times_table - Write a function that prints the 9 times table, that starts 0.
*
* Return: void
*/

void times_table(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			printf("%d", i * j);
			if (j == 9)
				continue;
			putchar(',');
			putchar(' ');
			if ((i * (j + 1)) > 9)
				continue;
			putchar(' ');
		}
		putchar('\n');
	}

}
