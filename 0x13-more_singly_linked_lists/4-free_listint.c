#include "lists.h"
/**
 * free_listint - my function
 * @head: var
 */
void free_listint(listint_t *head)
{
	listint_t *i;

	while (head)
	{
		i = head->next;
		free(head);
		head = i;
	}
}
