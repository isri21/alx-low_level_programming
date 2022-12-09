#include <stdio.h>

/**
 * main - print alphabet except q and e
 * Return: zero
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'e' || c == 'q')
			continue;
		putchar(c);
	}

	putchar('\n');
	return (0);
}
