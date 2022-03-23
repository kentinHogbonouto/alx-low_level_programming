#include "main.h"

/**
 *_strncpy - function declaration
 *@dest: parameter 1
 *@src: parameter 2
 *@n: parameter 3
 *
 *Return: always 0
 */

char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
while (src[i] && i < n)
{
dest[i] = src[i];
i++;
}
while (i < n)
{
dest[i] = '\0';
}
return (dest);
}
