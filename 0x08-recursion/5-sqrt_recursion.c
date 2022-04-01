#include "main.h"

/**
 * __sqrt_recursion - returns the natural square root of a number
 * @n: input number
 * @c: iterator.
 * Return: sqrt of n
 */
int __sqrt_recursion(int n, int c)
{
if ((c * c) == n)
return (c);
else if ((c * c) > n)
return (-1);
else
return (__sqrt_recursion(n, c + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate its sqrt
 * Return: sqrt of n
 */
int _sqrt_recursion(int n)
{
return (__sqrt_recursion(n, 1));
}
