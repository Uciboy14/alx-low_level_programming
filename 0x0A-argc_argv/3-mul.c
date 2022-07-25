#include <stdio.h>
#include "main.h"

int _atoi(char *s);

/**
 * main - mutiplies to numbers
 * @argc: argument count
 * @argv: argumemt array
 *
 * Return: 0 if no Error, otherwise 1
 */
int main(int argc, char *argv[])
{
	int a, b, c;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a  = _atoi(argv[1]);
	b  = _atoi(argv[2]);
	c  = a * b;
	printf("%d\n", c);

	return (0);
}

/**
 * _atoi - converts string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i, d, len, n, f, digit;

	i = 0;
	d = 0;
	len = 0;
	n = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}

