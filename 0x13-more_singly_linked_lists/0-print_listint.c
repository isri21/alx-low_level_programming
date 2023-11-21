#include "lists.h"
/**
 * print_listint - prints all the elements of a singly linked list
 * @h: head of singly linked list
 *
 * Return: the number of nodes
*/
size_t print_listint(const listint_t *h)
{
	const listint_t *ptr; /* declare pointer to node */
	size_t count; /* declare count var */

	ptr = h; /* set pointer to head node */
	count = 0; /* set counter to 0 */
	while (ptr != NULL) /* run untill the pointer is NULL */
	{
		printf("%d\n", ptr->n); /* print the data in that node */
		ptr = ptr->next; /* move the pointer to next node */
		count++; /* increment counter by 1 */
	}

	return (count); /* reutrn no of nodes */
}
