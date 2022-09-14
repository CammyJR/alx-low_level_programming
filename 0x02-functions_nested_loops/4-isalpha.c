#include "main.h"
/**
 * _isalpha - checks if input is an alphabet, case irrespective.
 * @c: input parameter
 * Retutn 1 on success, 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <=122) || (c >= 64 && c <= 90))
		return (1);
	else 
		return (0);
}
