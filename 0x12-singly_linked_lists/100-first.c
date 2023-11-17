#include <stdio.h>

void initial(void) __attribute__ ((constructor));

/**
 * initial - prints sentence before the main function
 */
void intial(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}

