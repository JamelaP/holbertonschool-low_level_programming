#include "holberton.h"
#include <stdio.h>

/**
 * _strcat-  a function that concatenates two strings.
 * @dest:first string
 * @src: second string
 *
 * Return: concatenate string
 */

char *_strcat(char *dest, char *src)
{
	int d, s;

	while (dest[d])
		d++;
	while (src[s])
	{
		dest[d] = src[s];
		d++;
		s++;
	}
	return (dest);
}
