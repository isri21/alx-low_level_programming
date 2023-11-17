#include "lists.h"
#include <string.h>
/**
 * add_node_end - adds a new node to the list at the end
 * @head: address of the node to add to
 * @str: string to add to the node
 *
 * Return: address of the new element, or NULL if fail
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp = malloc(sizeof(list_t)); /* create node */
	list_t *ptr = *head;

	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str); /* assign node string value */
	temp->len = _strlen(str); /* assign node value of string length */
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp; /* if the list is empty, make the node the head of the list */
	}
	else
	{
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = temp;
	}
	return (*head);
}
/**
* _strlen - returns the length of a string.
* @s: pointer to the string whose length is to be returned.
*
* Return: void
*/
int _strlen(const char *s)
{
	int i, c = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		c += 1;
	}
	return (c);
}
