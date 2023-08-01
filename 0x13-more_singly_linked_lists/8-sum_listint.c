#include "lists.h"
/**
 * sum_listint - my function
 * @head: var
 *
 * Return: if the list is empty, return 0
 */
int sum_listint(listint_t *head)
{
	int i = 0;
	listint_t *j = head;

	while (j)
	{
		i += j->n;
		j = j->next;
	}
	return (i);
}
