#include <stdio.h>
/**
 * main -Entry point
 * Description: 'Prints uppercase and lowercase alphabets'
 * Return: Always 0
 */

int main(void)
{
	int lower = 'a';
	int upper = 'A';

	while (lower <= 'z')
	{
		putchar (lower);
		lower++;
	}
	while (upper <= 'Z')
	{
		putchar (upper);
		upper++;
	}
	putchar ('\n');
	return (0);
}
