#include <stdio.h>
/**
 * main - This is the main function
 * Return: Returns 0
 */
int main(void)
{
	int i, l, s, t;

	i = 0;
	l = i;
	while (i < 10)
	{
		while (l < 10)
		{
			s = i;
			t = l + 1;
			while (s < 10)
			{
				while (t < 10)
					putchar(i + '0');
					putchar(l + '0');
					putchar(' ');
					putchar(s + '0');
					putchar(t + '0');
					if ((i == 9) && (l == 8) && (s == 9) && (t == 9))
						;
					else
					{
						putchar(',');
						putchar(' ');
					}
					t++;
				t = 0;
				s++;
			}
			l++;
		}
		l = 0;
		i++;
	}
	putchar('\n');
	return (0);
}
