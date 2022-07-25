#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: argument count
 * @argv: array of argument
 *
 * Return: Always 0 (Succes)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
