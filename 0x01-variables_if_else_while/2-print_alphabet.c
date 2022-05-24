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
	int n;
	int L;

	L = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (L > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, L);
	}
	if (L == 0)
	{
		printf("Last digit of %d is %d and is zero\n", n, L);
	}
	if (L < 6 &&  L != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, L);
	}
	return (0);
}
