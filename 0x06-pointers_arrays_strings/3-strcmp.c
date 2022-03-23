#include "main.h"

/**
 *_strmcp - function declaration
 *@s1: parameter 1
 *@s2: parameter 2
 *
 *Return: always 0
 */

int _strcmp(char *s1, char *s2)
{
while (*s1 != '\0' && (*s1 == *s2))
{
s1++;
s2++;
}
if (s1 == s2)
{
return (0);
}
else
{
return ((int)*s1 - (int)*s2);
}
}
