#include "main.h"
/**
 * print_diagonal - Draws a diagonal line in the terminal
 * @n: input parameter
 * Return: A diagonal line on the terminal.
 */
void print_diagonal(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		int b;

		for (b = 0; b < a; b++)
		{
			_putchar (' ');
		}
		_putchar (92);
		_putchar ('\n');
	}
}
