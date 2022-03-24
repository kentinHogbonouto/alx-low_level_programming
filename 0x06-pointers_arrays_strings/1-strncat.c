#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: string to be modified
 * @src: string to be copied to the end of dest
 * @n: numbers of chars to be copied from src to dest.
 * Return: pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (*(dest + i) != '\0')
		i++;

	while (*(src + j) != '\0' && j < n)
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(dest + i) = '\0';

	return (dest);
}
