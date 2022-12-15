#include "main.h"

/**
 * main - check weather the the character is upper.
 * @c : character to checked for case
 *
 * Return: returns 1 if upper or 0 for other case.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
