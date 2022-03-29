#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: pointer to the first row in the matrix
 */
void print_chessboard(char (*a)[8])
{
int i, j;
for (i = 1; i <= 8; i++)
{
for (j = 0; j < 8; j++)
_putchar(a[0][j]);
a++;
_putchar('\n');
}
}
