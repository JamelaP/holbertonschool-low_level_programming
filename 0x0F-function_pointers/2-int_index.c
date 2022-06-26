#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index-  returns the index of the first element.
 * @array: array
 * @size: number of elements in the array.
 * @cmp: pointer to the function to be used to compare values.
 *
 * Return: -1  if no element or size <=0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int c;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (c = 0; size > c; c++)
	{
		if (cmp(array[c]))
		return (c);
	}
	return (-1);
}

