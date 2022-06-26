#include "holberton.h"
#include <stdio.h>

/**
 * _strncpy-  a function that copies a string.
 * @dest: string one
 * @src: string two
 * @n: number of bytes
 *
 * Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < src[i]; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return(dest);
}

