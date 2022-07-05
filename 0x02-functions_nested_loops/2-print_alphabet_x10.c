#include "main.h"

/**
 * print_alphabet_x10 - print ten times the alphabet,
 * in lowercase, followed by newline
 * Retrun: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;

	i = 0;

	while (i < 10)
	{
		ch = 'a';
		while(ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}

