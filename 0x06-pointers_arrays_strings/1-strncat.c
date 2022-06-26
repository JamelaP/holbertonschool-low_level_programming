#include "holberton.h"
#include <stdio.h>

/**
 * _strncat-  a function that concatenates two strings.
 * @dest:first string
 * @src: second string
 * @n: number of bytes in strings
 *
 * Return: concatenate string
 */

char *_strncat(char *dest, char *src, int n)
{
	int d, s;

	d = 0;
	while (dest[d])
		d++;

	s = 0;
	while (s < n)
	{
		while ( src[s])
		{
		dest[d] = src[s];
		}
		d++;
		s++;
	}
	return (dest);
}
