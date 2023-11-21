#include "lists.h"
/**
 * free_listint2 - free the nodes of the list, and set head to NULL
 * @head: head of the list
 *
 * Return: void.
*/
void free_listint2(listint_t **head)
{
	listint_t *ptr = *head; /* create pointer to head */
	listint_t *temp; /* create temporary pointer to head */

	while (ptr != NULL) /* run untill the head is NULL*/
	{
		temp = ptr->next; /* move the temp to the next node */
		free(ptr); /* free the current node */
		/* set the head to the next node, which we stored in the temp */
		ptr = temp;
	}
	*head = NULL; /* set head to NULL */
}
