#include "lists.h"
/**
 * insert_nodeint_at_index -  inserts a new node at a given position.
 * @head: head of linked list
 * @idx: given position
 * @n: data to insert in new node
 *
 * Return: address of new node on success
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr = *head;
	listint_t *ptr1 = *head;
	listint_t *temp;
	unsigned int count, len;

	if (*head == NULL) /* check if head is NULL */
		return (NULL);
	count = 0;
	len = 0;
	/* get the number of elements in list & store in len */
	while (ptr1 != NULL)
	{
		ptr1 = ptr1->next;
		len++;
	}
	if (idx > len) /* index is greater that number of elements return NULL */
		return (NULL);

	temp = malloc(sizeof(listint_t)); /* create node */
	if (temp == NULL) /* check if malloc failed */
		return (NULL);
	temp->n = n; /* set the data in the new node */
	if (idx == 0) /* if index is 0 add it to the begining of the list */
	{
		*head = temp;
		return (temp);
	}
	while (count < idx - 1) /* traverse the list upto index */
	{
		ptr = ptr->next;
		count++;
	}
	/* set the link new node to address of next node of the index position */
	temp->next = ptr->next;
	/* set link of node in the index position to the address of the new node*/
	ptr->next = temp;

	return (temp);
}
