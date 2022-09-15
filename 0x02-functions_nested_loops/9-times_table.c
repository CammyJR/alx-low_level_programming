#include "main.h"
/**
 * times_table - Prints the 9 times table.
 * Return: 9 times table.
 */
void times_table(void)
{
	int a = 0;
	int b;

	while (a < 9)
	{
		b = 0;
		int c;

		while (b < 9)
		{
			c = a * b;

			if (b != 0)
			{
				_putchar (',');
				_putchar (' ');
			}
			if (c >= 10)
			{
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}
			else if (c < 10 && b != 0)
			{
				_putchar(' ');
				_putchar((c % 10) + '0');
			}
			else
				_putchar((c % 10) + '0');
		}
		_putchar('\n');
	}
}
