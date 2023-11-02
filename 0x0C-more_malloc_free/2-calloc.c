#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array of nmemb elements
 * of size bytes each and returns a pointer to the allocated memory.
 * @nmemb: number of blocks
 * @size: size of each block
 *
 * Return: a ponter to the allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem; /* declaring pointer for memory alloactionn */

	if (nmemb == 0 || size == 0) /* if nmeb or size is 0 return NULL */
		return (NULL);

	mem = malloc(nmemb * size); /* allocate memory */

	if (mem == NULL) /* if malloc fails return NULL */
		return (NULL);

	memset(mem, 0, nmemb * size); /* initialize memory block to 0 */

	return (mem);
}
