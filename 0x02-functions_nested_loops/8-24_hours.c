#include "main.h"
/**
 * jack_bauer - Prints every minute of the day.
 * Return: Every minute of the day.
 */
void jack_bauer(void)
{
	int h = 0;
	int m = 0;

	while (h < 24)
	{
		while (m < 60)
		{
			_purchar ((h / 10) + '0');
			_purchar ((h % 10) + '0');
			_purchar (':');
			_purchar ((m / 10) + '0');
			_purchar ((m % 10) + '0');
			_purchar ('\n');
			m++;
		}
		h++;
	}
}
