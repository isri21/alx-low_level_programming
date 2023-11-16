#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all the elements of a singly linked list
 * @h: head of singly linked list
 *
 * Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
	const list_t *ptr = h;
	int count = 0;

	while (ptr != NULL) /* run loop untill end of list */
	{
		/* if string of struct is NULL print (nil) instead */
		if (ptr->str == NULL)
			printf("[0] (nil)\n");
		else /* print the elements */
			printf("[%d] %s\n", ptr->len, ptr->str);
		ptr = ptr->next; /* move pointer to next list */
		count++; /* increment number of nodes */
	}
	return (count);
}
