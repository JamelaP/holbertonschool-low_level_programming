#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator-  a function that executes a function given as a parameter.
 * @array: an array.
 * @size: size of the array.
 * @action: a pointer to the function you need to use.
 *
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int c;

	if (array == NULL || action == NULL)
		return;

	for (c = 0; c < size; c++)
		action(array[c]);
}
