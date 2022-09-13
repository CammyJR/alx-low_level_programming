#include "main.h"
/**
 * main - Entry point
 * Description: Prints alphabets in lowercase
 * Return: void.
 */

void print_alphabet(void)
{
	int c = 'a';

	while (c <= 'z')
	{
		_putchar (c);
		c++;
	}
	_putchar ('\n');
}
