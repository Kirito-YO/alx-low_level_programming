#include "lists.h"
/**
 * listint_len - function can do
 * @h: var
 *
 * Return: the number of elements in a linked
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
