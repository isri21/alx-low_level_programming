#include <stdio.h>

/**
 * main - This is the main function
 * Return: zero
 */

int main(void)
{
	int i;
	int l;
	int s;

	for (i = 0; i <= 9; i++)
	{
		for (l = i + 1; l <= 9; l++)
		{
			for (s = l + 1; s <= 9; s++)
			{
				putchar(i + '0');
				putchar(l + '0');
				putchar(s + '0');
				if ((i == 7) && (l == 8) && (s == 9))
					;
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
