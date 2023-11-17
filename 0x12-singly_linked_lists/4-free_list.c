#include "lists.h"
/**
 * free_list - free the nodes of the list
 * @head: head of the list
 *
 * Return: void.
*/
void free_list(list_t *head)
{
	list_t *curr;

	while (head != NULL)
	{
		curr = head->next;
		free(head->str);
		free(head);
		head = curr;
	}
}
