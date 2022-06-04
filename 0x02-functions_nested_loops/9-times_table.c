#include "main.h"

/**
 * times_table - create times table
 *
 * Return: always 0 (Success)
 */

void times_table(void)
{
	int colomn;
	int row;
	int product;

	for (row = 0; row < 10; row++)
	{
		for (colomn = 0; colomn < 10; colomn++)
		{
			while (colomn == 0)
			{
				_putchar('0');
				colomn++;
			}

			product = colomn * row;

			if (product < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(product + '0');
			}
			if (product > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(product / 10 + '0');
				_putchar(product % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
