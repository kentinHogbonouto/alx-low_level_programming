#include "main.h"

/**
 * *_strncpy - copies a part of the string pointed to by src
 * @dest: pointer to string destination.
 * @src: pointer to string origin:
 * @n: number of characters to be copied.
 * Return: pointer to a char dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (*(src + i) != '\0' && i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	if (*(src + i) == '\0')
	{
		while (i < n)
			*(dest + i++) = '\0';
	}

	return (dest);
}
