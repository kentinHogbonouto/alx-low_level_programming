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
int num;
char base_16;
for (num = '0'; num <= '9'; num++)
putchar(num);
for (base_16 = 'a'; base_16 <= 'f'; base_16++)
putchar(base_16);
putchar('\n');
return (0);
}
