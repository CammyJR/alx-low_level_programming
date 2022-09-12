#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Prints alphabets in reverse'
 * Return: Always 0
 */

int main(void)
{
	int c = 'z' ;

	while (c >= 'a')
	{
		putchar (c);
		c--;
	}
	putchar ('\n');
	return (0);
}
