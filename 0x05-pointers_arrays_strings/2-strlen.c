#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @k: characters in string
 *
 * Return: length of string
 */
int _strlen(char *k)
{
	int n = 0;

	while (*(k + n))
	{
		n++;
	}

	return (n);
}
