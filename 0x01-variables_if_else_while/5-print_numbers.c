#include <stdio.h>
/**
 * main - Entry point
 * Description - 'Prints single digit numbers'
 * Return: Always 0
 */

int main(void)
{
	int num = '0';

	while (num <= '9')
	{
		putchar (num);
		num++;
	}
	putchar ('\n');
	return (0);
}
