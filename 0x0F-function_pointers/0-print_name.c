#include "function_pointers.h"
/**
 * print_name - function can do that.
 * @name: var1.
 * @f: var2.
 * Return: nothing.
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
