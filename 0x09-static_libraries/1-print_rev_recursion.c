#include "main.h"

/**
 *_print_rev_recursion - print reverse of a string
 *@s: string to print
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

