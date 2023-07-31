#include "lists.h"
/**
 * add_nodeint_end - my function
 * @head: var
 * @n: var
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *i, *j = *head;

	i = malloc(sizeof(listint_t));
	if (!i)
		return (NULL);
	i->n = n;
	i->next = NULL;
	if (*head == NULL)
	{
		*head = i;
		return (i);
	}
	while (j->next)
		j = j->next;
	j->next = i;
	return (i);
}
