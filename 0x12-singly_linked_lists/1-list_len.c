#include "lists.h"
/**
 * list_len - my function
 * @h: var
 *
 * Return: value
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
