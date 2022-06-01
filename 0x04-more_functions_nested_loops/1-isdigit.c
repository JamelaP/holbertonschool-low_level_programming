#include "main.h"
#include <stdio.h>

/**
 * _isdigit - check the code.
 *
 * @c: input
 *
 * Return: Always 0.
 */

int _isdigit(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
