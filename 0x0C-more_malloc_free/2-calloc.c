#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array given number of elements and size
 * @nmemb: number of elements
 * @size: size of each element
 * Return: Null if error, else pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (0);

	m = malloc(nmemb * size);
	if (m == 0)
		return (0);

	for (i = nmemb * size, ptr = m; i; i--)
		*ptr++ = 0;
	return (m);
}
