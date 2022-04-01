#include "main.h"

/**
 * _strlen_recursion - the length of a string
 * @s: string
 * Return: the length of a string.
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
else
return (1 + _strlen_recursion(s + 1));
}
/**
 * verificator - compares each character of the string
 * @s: string
 * @l: smallest iterator
 * @n: biggest iterator
 * Return: 1 if string is palindrome, 0 if string is not palindrome
 */
int verificator(char *s, int l, int n)
{
if (*(s + l) == *(s + n))
{
if (l == n || l == n + 1)
return (1);
return (0 + verificator(s, l + 1, n - 1));
}
return (0);
}
/**
 * is_palindrome - detects if a string is a palindrome
 * @s: string
 * Return: 1 if s is a palindrome, 0 if not
 */
int is_palindrome(char *s)
{
if (*s == '\0')
return (1);
return (verificator(s, 0, _strlen_recursion(s) - 1));
}
