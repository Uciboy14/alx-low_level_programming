#include <stdio.h>

/**
 * print_alphabet - prints the alphabet in lowercase,
 * followed by a newline.
 * Return: void
 */
void print_alphabet(void)
{
        for (char n = 'a'; n <= 'z'; n++)
        {
                putchar(n);
        }
        putchar('\n');
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

