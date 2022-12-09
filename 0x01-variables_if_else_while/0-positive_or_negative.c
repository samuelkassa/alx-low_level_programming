#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *
 * main - determines if a number is positive or negative 
 *
 * Description:  program will assign a random number to the variable 
 * each time the it is excuted
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative", n);
	else 
		printf("%d is positive", n);

	return (0);



}
