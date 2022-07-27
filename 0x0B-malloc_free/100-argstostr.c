#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all arguments of the progr
 * am into a string;
 * arguments are separated by a new line in the stri.
 * @ac: The number of arguments passed to the
 * @av: An array of pointers to the arguments.
 *
 * Return: If ac == 0, av == NULL, or the function fai
 * ls - NULL.
 * Otherwise - a pointer to the new string.
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int arg, byte, index, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++) size++;
	}

	str = malloc(sizeof(char) * size + 1);
	if (str == NULL)
		return (NULL);

	index = 0;
	
	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			str[index++] = av[arg][byte];
		str[index++] = '\n';
	}

	str[size] = '\0';

	return (str);
}
