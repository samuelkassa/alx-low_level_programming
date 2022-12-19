#include "main.h"

/**
 * _puts - prints the charactres in the string
 * @str: string pointer
 *
 * Return: void
 */

void _puts(char *str)
{
int i = 0;
while (str[i] != '\0')
{
_putchar(str[i]);
}
_putchar('\n');
}
