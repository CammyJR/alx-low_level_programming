#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Prints Hexadecimals in lowercase'
 * Return: Always 0
 */

int main(void)
{
	int dec = 48;
	int hex = 97;

	while (dec <= 57)
	{
		putchar (dec);
		dec++;
	}
	while (hex <= 102)
	{
		putchar (hex);
		hex++;
	}
	putchar ('\n');
	return (0);
}
