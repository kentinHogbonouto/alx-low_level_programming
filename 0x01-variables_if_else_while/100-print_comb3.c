#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int comb_3;
for (comb_3 = 0; comb_3 < 90; comb_3++)
{
putchar((comb_3 / 10) + '0');
putchar((comb_3 % 10) + '0');
if (comb_3 != 89)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
