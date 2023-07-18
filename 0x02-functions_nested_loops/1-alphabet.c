#include "main.h"

/**
 * print_alphabet - print
 *
 * Description: print alphabet in lowercase
 *
 * Return: 0 on succes
 */

void print_alphabet(void)
{
	char alph = 'a';

	while (alph < 'z')
	{
		_putchar(alph);
		alph++;
	}
	_putchar('\n');
}
