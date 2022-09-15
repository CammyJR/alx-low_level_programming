#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 * Return: absolute value of integer.
 */

int _abs(int c)
{
	if (c < 0)
		c = c * -1;
	return (c);
}
