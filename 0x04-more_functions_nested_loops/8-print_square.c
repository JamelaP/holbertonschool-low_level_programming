#include "main.h"
#include <stdio.h>

/**
 * print_square - print square
 *
 *@size: input
 *
 * Return: Always 0.
 */

void print_square(int size)
{
	int w;
	int t;

	if (size >= 0)
	{
		for (t = 0; t < size; t++)
		{
			for (w = 0; w < size; w++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}

}
