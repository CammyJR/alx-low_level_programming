#include "main.h"
/**
 * print_alphabet_x10 - Prints all lowercase alphabets 10 times.
 * Return: Void
 */
void print_alphabet_x10(void)
{
	int i = 0;
	int c;

	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar (c);
			c++;
		}
		_putchar ('\n');
		i++;
	}

}
