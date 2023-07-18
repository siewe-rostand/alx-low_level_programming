#include "main.h"
#include <string.h>

/**
 * main - entry point
 *
 * Description: print _putchar
 *
 * Return: 0 on success
 */

int main(void)
{
	char str[] = "_putchar";
	int i = 0;
	int size = (int) sizeof(str);
	int p = size - 1;
	for (i = 0; i < p; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

	return (0);
}
