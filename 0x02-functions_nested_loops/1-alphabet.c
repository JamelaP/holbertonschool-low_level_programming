#include "main.h"

/**
 * prin_alphabet - prints lowercase alphabet
 *
 * Returrn: void
 */

void print_alphabet(void)
{ 
	int c;

	for (c= 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}	
