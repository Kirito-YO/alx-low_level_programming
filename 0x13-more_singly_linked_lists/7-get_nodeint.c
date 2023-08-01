#include "lists.h"
/**
 * get_nodeint_at_index - my function
 * @head: var
 * @index: var
 *
 * Return: NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *j = head;

	while (j && i < index)
	{
		j = j->next;
		i++;
	}
	return (j ? j : NULL);
}
