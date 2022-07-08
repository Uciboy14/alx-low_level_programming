#include "main.h"

/**
 * print_diagonal - draws a diagona line on the termi
 * al
 * @n: the number of times the character \ should be
 * printed
 * if n is 0 or less it should only print a newline
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (j == i)
					_putchar('\\');
				else if (j < i)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}

