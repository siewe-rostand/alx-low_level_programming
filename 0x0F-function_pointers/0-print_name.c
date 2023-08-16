#include "function_pointers.h"

/**
 * print_name - function to print name
 *
 * @name: name param
 * @f: function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
