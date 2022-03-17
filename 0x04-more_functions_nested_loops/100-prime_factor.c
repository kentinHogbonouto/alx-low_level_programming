#include <stdio.h>

/**
 * main - print the largest primt factor of a number
 *
 * Return: Always 0.
 */
int main(void)
{
	long num = 612852475143;
	int divisor = 2;
	int maxdivisor = 2;

	while (num > 1)
	{
		while (num % divisor == 0)
		{
			maxdivisor = divisor;
			num /= divisor;
		}

		divisor += 1;
	}
	printf("%d\n", maxdivisor);
	return (0);
}
