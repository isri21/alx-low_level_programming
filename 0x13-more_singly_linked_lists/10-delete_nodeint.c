#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node at specified index
 * @head: pointer to the list
 * @index: index specified
 *
 * Return: 1 if success, else -1
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count, len; /* create a counter for the loop */
	listint_t  *ptr, *tptr; /* create a pointer to the head */

	if (*head == NULL || head == NULL) /* check if list is empty */
		return (-1);
	if (index == 0) /* If position is 0, or first element */
	{
		ptr = *head; /* create a pointer to head */
		tptr = ptr->next; /* Store next element */
		free(ptr); /* free first element */
		*head = tptr; /* set head to second element via pointer created */
		return (1);
	}
	count = 0;
	ptr = *head;
	while (ptr != NULL) /* get the number of elements in list */
	{
		ptr = ptr->next;
		count++;
	}
	len = count; /* set number of elements to count */
	if (index > len) /* check if pos is greater thatn number of elements */
		return (-1);
	ptr = *head; /* reset ptr for traversing */
	count = 0; /* reset counter for traversing */
	while (count < index - 1) /* Traverse until 1 - the poistion specified */
	{
		ptr = ptr->next;
		count++;
	}
	tptr = ptr->next; /* saves the address of node to be deleted */
/* set link of node before deleted node to address of node after deleted node*/
	ptr->next = ptr->next->next;
	free(tptr); /* delete node */

	return (1);
}
