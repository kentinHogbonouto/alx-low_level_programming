#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to be modified.
 * @src: string to be copied to the end of end.
 * Return: pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;

	for (; *(dest + i) != '\0'; i++)
	{
	}
	for (; *src != '\0'; src++)
	{
		*(dest + i) = *src;
		i++;
	}
	*(dest + i) = *src;

	return (dest);
}
