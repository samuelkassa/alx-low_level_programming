#include "main.h"

/**
 * _isdigit - checks for a digit (between 0 and 9)
 * @c: parameter to be checked
 * 
 * Return: return 1 if digit 0 if not
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);

	return (0);
}
