/**
 * File: 100-first.c
 * Author: Samuyel Kasahun
 */

#include <stdio.h>

void __attribute__((constructor)) priority(void);

/**
 * priority - Prints a string before the main function is excuted.
 */
void priority(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
