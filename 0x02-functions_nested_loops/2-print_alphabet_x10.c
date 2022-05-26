#include "main.h"

/**
 * print_alphabet - prints lowercase alphabet
 *
 * Returrn: void
 */

void print_alphabet(void)
{
	int c;
	int b;

	b = 0;

	while (b < 11)
	{
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
	b++;
	}
}
