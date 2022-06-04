#include "main.h"
#include <stdio.h>

/**
 * print_triangle - check the code.
 *
 *@size: input
 *
 * Return: Always 0.
 */

void print_line(int n)
{
	int l;

	if (n >= 0)
	{
		for (l = 1; l <= n; l++)
		{
			_putchar(95);
		}
	}
	_putchar('\n');

}
