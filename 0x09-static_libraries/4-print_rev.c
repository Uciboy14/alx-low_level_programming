#include "main.h"

/**
 * print_rev - print reverse of a string, followed by
 * a newline
 * @str: string to be reversed
 */
void print_rev(char *str)
{
	int i, j, len;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	len = i;

	for (j = len - 1; j >= 0; j--)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
