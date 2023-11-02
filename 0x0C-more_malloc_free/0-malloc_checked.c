#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: size to allocate
 *
 * Return: pointer if success, else exits program with code of 98
*/
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	else
		return (ptr);
}
