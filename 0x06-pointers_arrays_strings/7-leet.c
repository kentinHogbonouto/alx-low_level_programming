#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @str: pointer to array of chars.
 * Return: pointer t str.
 */
char *leet(char *str)
{
	int i, j;
	char *replace = "aAeEoOtTlL4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (str[i] == replace[j])
				str[i] = replace[j + 10];
		}
	}
	return (str);
}
