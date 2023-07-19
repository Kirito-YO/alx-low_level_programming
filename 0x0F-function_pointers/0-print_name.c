#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - fucntion can do that
 * @name: var
 * @f: var
 * Return: nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
