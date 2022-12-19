#include "main.h"

/**
 * puts2 - prints only characters of a string with composite index number
 * @str: pointer to a char
 *
 * Return: void
 */

void puts2(char *str)
{
int j = 0;

while (j % 2 == 0)
{
_putchar(str[j]);
j++;
}
}
