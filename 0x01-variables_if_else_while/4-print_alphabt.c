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
char alpha_bet, a, b;
a = 'e';
b = 'q';
for (alpha_bet = 'a'; alpha_bet <= 'z'; alpha_bet++)
{
if (alpha_bet != a && alpha_bet != b)
putchar(alpha_bet);
}
printf("\n");
return (0);
}
