#include "main.h"
/**
 * main - Entry point
 * Description: Prints characters
 * Return: Always 0
 */

int main(void)
{
	char c[] = "_putchar";
	int i= 0;

	while (i < 8)
	{
		_putchar(c[i]);
		i++;
	}
	_putchar ('\n');
	return (0);
}
