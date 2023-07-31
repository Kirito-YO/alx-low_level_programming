#include "lists.h"
/**
 * pop_listint - my fucntion
 * @head: var
 *
 * Return: 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *i;
	int j;

	if (!head || !*head)
		return (0);
	j = (*head)->n;
	i = (*head)->next;
	free(*head);
	*head = i;
	return (j);
}
