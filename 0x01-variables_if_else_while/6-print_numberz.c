#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Prints single digit numbers'
 * Return: Alwyas 0
 */

int main(void)
{
	int ascii = 48;

	while (ascii <= 57)
	{
		putchar (ascii);
		ascii++;
	}
	putchar ('\n');
	return (0);
}
