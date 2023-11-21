#include "lists.h"
/**
 * pop_listint - delete the head node
 * @head: head of list
 *
 * Return: data of head node
*/
int pop_listint(listint_t **head)
{
	listint_t *ptr = *head; /* create pointer to first node */
	int n = ptr->n; /* store data in head */

	if (*head == NULL) /* if list is empty return 0*/
		return (0);
	*head = ptr->next; /* move head to the next node */
	free(ptr); /* delete the first node */
	return (n); /* return data of head node deleted */
}
