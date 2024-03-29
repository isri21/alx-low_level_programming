#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
* main - Entry point
*
* Descriptions: Checks the last digit of a random number and prints
* "Last digit of (number) is (last digit of the num) and is (if last
* digit is greater than 5 it prints that, if it is less than 6 and not
* 0 it prints that, anif it is 0 it prints that
*
* Return: 0;
*/
int main(void)
{
	int n, i;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	i = n % 10;

	if (i > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, i);
	else if (i < 6 && i != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, i);
	else
		printf("Last digit of %d is %d and is 0\n", n, i);
	return (0);
}
