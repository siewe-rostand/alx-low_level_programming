#include "main.h"

/**
 * swap_int - swap integers
 *
 * @a: first param
 *
 * @b: second param
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;

	*b = tmp;

}
