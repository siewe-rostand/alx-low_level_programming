#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - function that print string
 *
 * @separator: string separator
 * @n: fixed param
 *
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list ap;

	char *strg;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		strg = va_arg(ap, char *);

		if (strg != NULL)
		{
			printf("%s", strg);
		}
		else
		{
			printf("(nil)");
		}

		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(ap);
}
