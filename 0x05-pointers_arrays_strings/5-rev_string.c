#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer variable
 *
 * Return: void
 */

void rev_string(char *s)
{
int j, max, half;
char first, last;

j = 0;
while (s[j] != '\0')
{
j++;
}

max = j - 1;
half = max / 2;

while (half >= 0)
{
first = s[max - half];
last = s[half];
s[half] = first;
s[max - half] = last;
half--;
}
}
