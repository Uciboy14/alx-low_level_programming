#include "main.h"

/**
 * strlen - returns the length of a string
 * @s: char pointer to check length
 * Return: int
 */
int _strlen(char *s)
{
	int i;
	
	i = 0;	
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
