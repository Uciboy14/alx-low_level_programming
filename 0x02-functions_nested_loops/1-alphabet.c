#include "main.h"

/**
 * print_alphabet - print alphabet, followed by
 * newline
 * Return: void
 */
void print_alphabet(void)
{
	char ch;
        ch = 'a';

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
