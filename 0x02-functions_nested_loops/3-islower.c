#include "main.h"

/**
 * _islower - checks if character is in lowercase.
 * Return: 1 if success, 0 oherwise.
 */

int _islower(int c)
{
	if(c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
