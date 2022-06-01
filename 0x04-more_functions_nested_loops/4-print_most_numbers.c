#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - check the code.
 *
 *
 * Return: Always 0.
 */

void print_most_numbers(void)
{
	int j;

	for (j = 0; j < 10; j++)
	{
		if (j != '2' && j != '4')
		{
			_putchar(j + '0');
		}
	}
	_putchar('\n');
}
