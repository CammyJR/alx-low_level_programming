#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 * @l: input parameter
 * Return: Last digit of a number.
 */
int print_last_digit(int l)
{
	l = l % 10;
	if (l < 0)
		l = l * -1;
	_putchar (l + '0');
	return (l);
}
