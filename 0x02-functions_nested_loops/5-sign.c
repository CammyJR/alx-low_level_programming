#include "main.h"
/**
 * print_sign - Prints the sign of a number
 * @n: input parameter
 * Return: 1 if greater than zero, 0 if zero, -1 if less than zero 
 * 		and '/' if not a digit.
 */
int print_sign(int n)
{
	if ( n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar ('-');
		return (-1);
	}
	else
	{
		_putchar ('-');
		return ('/');
	}
}
