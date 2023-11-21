#include "lists.h"
/**
 * free_listint2 - free the nodes of the list, and set head to NULL
 * @head: head of the list
 *
 * Return: void.
*/
void free_listint2(listint_t **head)
{
	listint_t *temp; /* create temporary pointer to store next node */

	if (head == NULL)
		return;
	while (*head != NULL) /* run untill the head is NULL*/
	{
		temp = (*head)->next; /* set this to the next node*/
		free(*head); /* free the current node */
		/* set the head to the next node, which we stored in the temp */
		*head = temp;
	}
}
