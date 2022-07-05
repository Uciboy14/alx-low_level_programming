#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase,
 * followed by a newline.
 * Return: void
 */
void print_alphabet(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
