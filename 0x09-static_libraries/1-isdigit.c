#include "main.h"

/**
 * _isdigit - check digit @siewe-rostand
 *
 * @c: parameter
 *
 * Return: 1 if digit else 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
