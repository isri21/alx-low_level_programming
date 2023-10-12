#include "main.h"

/**
* more_numbers - prints 10 times the numbers, from 0 to 14,
* followed by a new line.
*
* Return: void
*/
void more_numbers(void)
{
	int j;

	for (j = 1; j <= 10; j++)
	{
		int i;

		for (i = 0; i <= 14; i++)
		{
		/* Checks if i is above 10 then turns every thing to 1 */
			if (i > 9)
				_putchar('0' + i / 10);
		/* Then prints the single digit */
			_putchar('0' + i % 10);
		}
		_putchar('\n');
	}
}
