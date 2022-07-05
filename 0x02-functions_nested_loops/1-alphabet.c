#include <stdio.h>
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

/**
 * main - check the code 
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_alphabet();
	return (0);
}

