#include "main.h"

/**
 * main - check the code
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;
	ch = 'a';
	
	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
	return (0);
}

