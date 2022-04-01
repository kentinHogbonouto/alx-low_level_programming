#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * of integers
 * @a: pointer to the first element in the matrix
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
int i, res1 = 0, res2 = 0;
for (i = 0; i < size; i++)
{
res1 += a[i];
res2 += a[size - i - 1];
a += size;
}
printf("%d, %d\n", res1, res2);
}
