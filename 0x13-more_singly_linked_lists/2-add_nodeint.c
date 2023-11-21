#include "lists.h"
/**
 * add_nodeint - adds a new node to the list at the begining
 * @head: address of the node to add to
 * @n: int to add to the node
 *
 * Return: address of the new element, or NULL if fail
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t)); /* create the node */

	if (temp == NULL) /* return NULL if malloc fails */
		return (NULL);

	temp->n = n; /* assign value to new node */
	temp->next = *head; /* set the node to point to first node */
	*head = temp; /* make the first node this node */

	return (temp); /* return the address of this node */
}
