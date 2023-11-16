#include "lists.h"
#include <string.h>
/**
 * add_node - adds a new node to the list at the begining
 * @head: address of the node to add to
 * @str: string to add to the node
 *
 * Return: address of the new element, or NULL if fail
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t)); /* create node */

	if (ptr == NULL)
		return (NULL);
	ptr->str = strdup(str); /* assign node string value */
	ptr->len = _strlen(str); /* assign node value of string length */
	ptr->next = *head; /* link node at the begining of list */
	*head = ptr; /* change the head to the new node */

	return (*head); /* return new head */
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
