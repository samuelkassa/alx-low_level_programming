#include "main.h"

/**
 * _puts - prints the charactres in the string
 * @str: string pointer
 *
 * Return: void
 */

void _puts(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
