#include "main.h"
#include <stdio.h>

/**
 * print_line - check the code.
 *
 *@n: input
 *
 * Return: Always 0.
 */

void print_line(int n)
{
	int l;

	if (n >= 0)
	{
		for (l = 0; l <= n; l++)
		{
			_putchar('_');
		}
	}
	else
	{
		_putchar('\n');

	}
}
