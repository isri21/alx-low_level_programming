#include <stdio.h>

/**
* main - Entry point of the program.
*
* Description: prints exactly "with proper grammar,
* but the outcome is a piece of art,", followed by a new line.
* Return: 0
*/

int main(void)
{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));
	return (0);
}
