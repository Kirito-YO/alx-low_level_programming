#include "function_pointers.h"
/**
 * array_iterator - function can do that
 * @array: var
 * @size: var
 * @action: var
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
