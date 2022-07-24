#include "main.h"

/**
 * swap_int - swaps to pointers
 * @a: first ponters to swap
 * @b: second pointers to swap
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}
