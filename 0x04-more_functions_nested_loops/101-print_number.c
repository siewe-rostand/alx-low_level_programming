#include <math.h>
#include "main.h"


/**
 * print_number - prints an integer @siewe-rostand
 * @n: number to print
 * Return void
 */

void print_number(int n)
{
	/*change to positive if negative */
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	/* get the last digit and recursively */
	if (n / 10)
	{
		print_number(n / 10);
	}

	/* print the last digit now */

	_putchar(n % 10 + 48);
}
