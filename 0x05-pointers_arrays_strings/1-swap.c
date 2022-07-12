#include "main.h"

/**
 * swap - swaps the value of two intergers
 * @a: first int pointer
 * @b: second int pointer
 */
void swap_int(int *a, int *b)
{
	int c;
	
	c = *b;
	*b = *a;
	*b = c;
}
