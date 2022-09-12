#include <stdio.h>
/**
 * main
 * Description: 'Prints specified lowercase alphabets'
 * Return: Always 0
 */

int main(void)
{
	int lower = 'a';

	while (lower <= 'z')
	{
		if (lower != 'e' && lower != 'q')
			putchar (lower);
		lower++;
	}
	putchar ('\n');
	return (0);
}	
