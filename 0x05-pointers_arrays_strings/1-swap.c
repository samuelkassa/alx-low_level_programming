#include "main.h"

/**
 * swap_int - swaps the value of two pointers
 *@a: first pointer
 *@b: second pointer
 *
 *Return: void
 */

void swap_int(int *a, int *b)
{
int s;
s = *a;
*a = *b;
*b = s;
}
