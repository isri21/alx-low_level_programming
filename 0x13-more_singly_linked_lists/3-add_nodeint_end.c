#include "lists.h"
/**
 * add_nodeint_end - adds a new node to the list at the end
 * @head: address of the node to add to
 * @n: int to add to the node
 *
 * Return: address of the new element, or NULL if fail
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr = *head; /* pointer for traversing */
	listint_t *temp = malloc(sizeof(listint_t)); /* create node */

	if (temp == NULL) /* check if malloc fails */
		return (NULL);

	temp->n = n; /* assign value to node */
	temp->next = NULL; /* set link of node to NULL */

	if (*head == NULL) /* if head is NULL point it to this node */
	{
		*head = temp;
		return (temp); /* return address of new node */
	}

	while (ptr->next != NULL) /* traverse to end of node */
	{
		ptr = ptr->next;
	}
	ptr->next = temp; /* set link section of last node to new node */
	return (temp); /* return address of new node */
}
