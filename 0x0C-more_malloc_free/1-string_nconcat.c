#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat -  concatenates two strings.
 *
 * @s1: pointer to string 1 to be concatenated
 * @s2: pointer to string 2 to be concatenated
 * @n: number of bytes of s2 to be concatenated
 *
 * Return: pointer to the string result
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *tab;
	unsigned int len1 = 0, len2 = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	while (s1[len1])
		len1++;

	if (s2 == NULL)
		s2 = "";
	while (s2[len2])
		len2++;

	tab = malloc(sizeof(char) * len1 + n + 1);
	if (tab == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		tab[i] = s1[i];

	for (j = 0; s2[j] && j < n; j++)
		tab[i + j] = s2[j];

	tab[i + j] = '\0';

	return (tab);
}

