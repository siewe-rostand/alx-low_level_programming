#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - iterate throught an array
 * @array: pointer to int param
 * @size: size of param
 * @action: function pointer param
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
