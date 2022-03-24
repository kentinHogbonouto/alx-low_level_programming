#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: pointer to array of chars
 * Return: pointer to str
 */
char *rot13(char *str)
{
	char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i;

	char *strcopy = str;

	while (*str != '\0')
	{
		for (i = 0; i < 52; i++)
			if (*str == in[i])
			{
				*str = out[i];
				break;
			}
		str++;
	}
	return (strcopy);
}
