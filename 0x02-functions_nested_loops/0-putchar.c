#include "main.h"

/**
* main - prints "putchar"
*
* Return: Always 0.
*/

int main(void)
{
	char str[] = "_putchar";
	int c;

	c = 0;

	while (str[c] != '\0')
	{
		_putchar(str[c]);
		c++;
	}
	_putchar('\n');
	return (0);
}
