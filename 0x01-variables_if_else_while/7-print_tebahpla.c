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
char alpha_bet;
for (alpha_bet = 'z'; alpha_bet >= 'a'; alpha_bet--)
putchar(alpha_bet);
putchar('\n');
return (0);
}
