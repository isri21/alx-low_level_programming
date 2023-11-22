#include "lists.h"
/**
 * sum_listint - eturns the sum of all the data (n) of a listint_t linked list.
 * @head: ponter to the list
 *
 * Return: sum of data in list if success, else 0
*/
int sum_listint(listint_t *head)
{
	listint_t *ptr = head; /* pointer fro traversing */
	int sum = 0; /* var to store sum */

	if (head == NULL) /* if argument is NULL return 0 */
		return (0);

	while (ptr != NULL) /* add the data in the list */
	{
		sum += ptr->n;
		ptr = ptr->next;
	}

	return (sum); /* return the sum */
}
