#include "main.h"
#include <stdio.h>

/**
 * more_numbers - check the code.
 *
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
	int j;
	int k;

	for (j = 0; j < 10; j++)
	{
		for (k = 0; k <= 14; k++)
		{
			if (k >= 9)
			{
			_putchar(k / 10 + '0');
			}
			_putchar(k % 10 + '0');
		}
		_putchar('\n');
	}
}
