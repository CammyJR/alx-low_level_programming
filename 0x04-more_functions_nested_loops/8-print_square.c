#include "main.h"
/**
 * print_size - Prints a square.
 * @size: input parameter
 * Return: A Squarre.
 */
void print_size(int size)
{
	int a;

	if (n < 0)
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
			_purchar ('\n');
		}
	}
}
