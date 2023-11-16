#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list
 * @h: head of the linked list
 *
 * Return: number of elements in the list
*/
size_t list_len(const list_t *h)
{
	int count;
	const list_t *ptr = h;

	count = 0;
	while (ptr != NULL) /* run loop until end of list */
	{
		ptr = ptr->next; /* move pointer to next node */
		count++; /* increment the counter */
	}
	return (count);
}
