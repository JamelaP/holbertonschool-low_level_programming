#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer.
 *
 * Return: Always 0.
 */

void jack_bauer(void)
{
	int hour = 0;
	int minute = 0;

	while (hour < 24)
	{
		minute = 0;
		while (minute < 60)
		{
			if (hour < 10)
			{
				_putchar('0');
				_putchar(hour + '0');
			}
			if (hour > 9)
			{
				_putchar(hour / 10 + '0');
				_putchar(hour % 10 + '0');
			}

			_putchar(':');

			if (minute < 10)
			{
				_putchar('0');
				_putchar(minute + '0');
			}
			if (minute > 9)
			{
				_putchar(minute / 10 + '0');
				_putchar(minute % 10 + '0');
			}
			minute++;
			_putchar('\n');
		}
		hour++;
	}

}
