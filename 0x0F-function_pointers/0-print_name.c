#include "function_pointers.h"

/**
 * print_name - a function that prins a name
 * @name: person's name
 * @f: function pointer
 *
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == || f == NULL)
		return;

	f(name);
}
