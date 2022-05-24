#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	a = 65;

	for (a = 97; a < 123; a++)
	{
		if (a != 101 && a != 113)
		{
		putchar(a);
		}
	}
	putchar('\n');
	return (0);
}
