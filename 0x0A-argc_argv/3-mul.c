#include <stdio.h>
#include "main.h"

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
	
	/* if the input isn't two intgers */
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

	
