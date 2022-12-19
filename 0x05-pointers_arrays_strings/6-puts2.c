#include "main.h"

/**
 * puts2 - prints only characters of a string with composite index number
 * @str: pointer to a char
 *
 * Return: void
 */

void puts2(char *str)
{
int j;

for (j = 0; str[j] != '\0'; j++)
{
if (j % 2 == 0)
{
_putchar(str[j]);
}
else
{
continue;
}
}
}
