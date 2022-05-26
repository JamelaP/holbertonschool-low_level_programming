#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alphabet
 *
 * Returrn: void
 */

void print_alphabet_x10(void)
{
	int c;
	int b;

	b = 1;

	while (b < 10)
	{
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
	b++;
	}
}
