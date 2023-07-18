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
	int i;
	int size = (int) sizeof(str);

	for (i = 0; i < size; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

	return (0);
}
