#include "main.h"

/**
 * print_rev - print string in reverse
 *
 * @s: param
 *
 * Return: void
 */

void print_rev(char *s)
{
	int len = 0;
	int i;

	while (s[len] != '\0')
	{
		len++;
	}

	/* print the string now in reverse order */
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
