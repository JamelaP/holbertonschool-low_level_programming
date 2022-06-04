#include "main.h"
#include <stdio.h>

/**
 * print_triangle - check the code.
 *
 * @size: input
 *
 * Return: Always 0.
 */

void print_triangle(int size)
{
	int blank;
	int hashtag;
	int row;

	if (size > 0)
	{
		for (row = 1; row <= size; row++)
		{
			blank = size - row;
			while (blank > 0)
			{
				_putchar(' ');
				blank--;
			}
			hashtag = row;
			while (hashtag > 0)
			{
				_putchar('#');
				hashtag--;
			}
		_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

