#include "main.h"
/**
 * print_line - Draws a straight line in the terminal
 * @n: input parameter
 * Return: A straight line on the terminal.
 */
void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		_putchar ('_');
	}
	_putchar('\n');

}
