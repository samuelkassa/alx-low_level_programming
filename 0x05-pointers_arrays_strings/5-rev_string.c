#include <stdio.h>
#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer variable
 *
 * Return: void
 */

void rev_string(char *s)
{
int j = 0;

while (s[j] != '\0')
{
j++;
}
j--;
while (j >= 0)
{
printf("%c", s[j]);
j--;
}
printf("\n");
}
