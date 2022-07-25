#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of argument it recieves
 * @argc: argument count
 * @argv: array of argument
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}

	return (0);
}
