#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: head of the node
 * @index: nth index
 *
 * Return: nth node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr = head; /* pointer for traversing for length */
	listint_t *ptr1 = head; /* pointer for traversing for index */
	unsigned int count = 0; /* counter for traversing for index */
	unsigned int len = 0; /* counter for storing number of elements in list */

	if (head == NULL)
		return (NULL);

	/* get the number of elements in list & store in len */
	while (ptr != NULL)
	{
		ptr = ptr->next;
		len++;
	}

	/* check if index entered is larger than number of elements in len */
	if (index > len)
		return (NULL);

	/* get the node at the specified index */
	while (count < index) /* traverse until reach index */
	{
		ptr1 = ptr1->next;
		count++;
	}

	return (ptr1);
}
