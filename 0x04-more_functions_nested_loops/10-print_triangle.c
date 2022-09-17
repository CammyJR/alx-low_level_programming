#include "main.h"
/**
 * print_triangle - Prints a triangle
 * @size: input parameter
 * Returns: A triangle
 */
void print_triangle(int size)
{
	int a;

	if (size > 0)
	{
		for (a = 1; a <= size; a++)
		{
			int b;

			for (b = 0; b < size; b++)
			{
				if (b  < size - a)
				{
					_putchar (' ');
				}
				else
					_putchar ('#');
			}
			_putchar ('\n');
		}
	}
	else
		_putchar ('\n');
}
