#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string to compare
 * Return: -15, 0 or 15 if s1 is less, equals or greather than s2.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (s1[i] == s2[i])
		return (0);
	return (s1[i] - s2[i]);
}
