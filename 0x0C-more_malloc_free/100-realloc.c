#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: previously allocated memory
 * @old_size: size of previous memory
 * @new_size: size of the newly allocated memory
 *
 * Return: pointer to allocated memory
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newmallc, *newmem;
	/* if new size an old size are equla return new mem pionter*/
	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL) /* if ptr is NULL replicate the malloc function */
	{
		newmallc = malloc(new_size);
		if (newmallc == NULL) /* if malloc fails return NULL */
			return (NULL);
		return (newmallc);
	}
	if (new_size == 0) /* if new size is 0 free ptr */
	{
		free(ptr);
		return (NULL);
	}
	newmem = malloc(new_size); /* create new memory */
	if (newmem == NULL) /* if malloc fails return NULL */
		return (NULL);
	memcpy(newmem, ptr, old_size); /* copy all from ptr to new memory */
	free(ptr);

	return (newmem); /* return new mem pionter pointer */

}
