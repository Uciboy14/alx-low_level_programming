#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * positive_or_negative - assigns a random number tont
 * it executes, and prints it
 * @n: the int to check
 */
void positive_or_negative(int i)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (i == 0)
		printf("%d is zero\n", i);
	else if (n < 0)
		printf("%d is negative\n", n);
}
