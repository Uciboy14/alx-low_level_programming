#include "main.h"

/**
 * rev_string - print reverse of a string, followed by
 * a newline
 * @str: string to be reversed
 */
void rev_string(char *str)
{
	char tmp;
	int i, len1, len;

	len = 0;
	len1 = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	len1 = len - 1;

	for (i = 0; i < len / 2; i++)
	{
		tmp = str[i];
		str[i] = str[len1];
		str[len1--] = tmp;
	}
}
