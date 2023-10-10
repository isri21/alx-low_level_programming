#include "main.h"
/**
* jack_bauer - prints every minute of the day of Jack Bauer,
* starting from 00:00 to 23:59.
*
* Return: void
*/
void jack_bauer(void)
{
	int i;

	for (i = 0; i < 3; i++)
	{
		int j;

		for (j = 0; j < 10; j++)
		{
			int k;

			if (i == 2 && j == 4)
				break;
			for (k = 0; k < 6; k++)
			{
				int l;

				for (l = 0; l < 10; l++)
				{
					_putchar('0' + i);
					_putchar('0' + j);
					_putchar(':');
					_putchar('0' + k);
					_putchar('0' + l);
					_putchar('\n');
				}
			}
		}
	}


}
