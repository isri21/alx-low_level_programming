#include <stdio.h>

/**
 * main - This is the main function
 * Return: zero
 */


int main(void)
{


	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);

		if (i == '9')
			break;

		putchar(',');

		putchar(' ');
	}

	putchar('\n');

	return (0);
}
