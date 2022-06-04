#include "main.h"

/**
 * swap_int - check the code
 *
 *@k: input
 *@j: input
 *
 * Return: Always 0.
 */

void swap_int(int *k, int *j)
{
	int l;

	l = *k;
	*k = *j;
	*j = l;
}
