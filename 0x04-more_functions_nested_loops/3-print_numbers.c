#include "main.h"

/**
 * print_numbers - numbers to 9 by @siewe-rostand
 *
 * Return: void
 */

void print_numbers(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		_putchar(48 + i);
	}
	_putchar('\n');
}
