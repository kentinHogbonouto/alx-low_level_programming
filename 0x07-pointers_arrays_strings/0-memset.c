/**
 *_memset - function declaration
 *@s: First parameter
 *@b: second parameter
 *@n: third parameter
 *
 *Return: always 0
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
for (i = 0; i < n; i++)
s[i] = b;
return (s);
}
