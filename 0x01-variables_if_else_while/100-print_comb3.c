#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num_1, num_2;
for (num_1 = 48; num_1 <= 57; num_1++)
{
for (num_2 = 48; num_2 <= 57; num_2++)
{
if (num_1 == num_2 || num_1 <= num_2)
{
}
else
{
putchar(num_1);
putchar(num_2);
if (num_1 == 56 && num_2 == 57)
{
}
else
{
putchar(44);
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
