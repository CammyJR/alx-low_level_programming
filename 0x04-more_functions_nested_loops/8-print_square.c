#include "main.h"
/**
 * print_square - Prints a square.
 * @size: input parameter
 * Return: A Squarre.
 */
void print_square(int size)
{
	int a;

	if (size <= 0)
	{
		_putchar ('\n');
	}
	else
	{
		for (a = 0; a < size; a++)
		{
			int b;

			for (b = 0; b < size; b++)
			{
				_putchar ('#');
			}
			_putchar ('\n');
		}
	}
}
