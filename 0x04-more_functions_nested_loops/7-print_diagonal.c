#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - check the code.
 *
 * @n: interger
 *
 * Return: Always 0.
 */

void print_diagonal(int n)
{
	int l, s;

	if (n > 0)
	{
		for (l = 0; l < n; l++)
		{
			for (s = 0; s < l; s++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}

}
