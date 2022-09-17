#include <stdio.h>
/**
 * main -Entry Point
 * Description: Prints Fizz for multiples of 3,
 * prints Buzz for multiples of 5, prints FizzBuzz 
 * for multiples of 3 and 5.
 * Return: Always 0.
 */

int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0 && a % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (a % 3 == 0)
		{
			printf("Fizz");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz");
		}
		else
			printf("%i", a);
		if (a != 100)
			printf(" ");
	}
	putchar('\n');
	return (0);
}
