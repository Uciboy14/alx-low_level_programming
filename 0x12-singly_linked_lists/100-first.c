#include <stdio.h>

void first(void)__attribute__((constructor));

/**
 * first - prints a function before the main function
 * is executed.
 */
void first(void)
{
	printf("Your're beat! and yet you must, allow\n");
	printf("I bore my house upon my back!\n")
}

