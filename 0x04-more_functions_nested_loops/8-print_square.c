#include "main.h"

/**
 * print_square - prints a square
 *
 * @n: is the size of the square
 */
void print_square(int n)
{
	int hgt = n;
	int wdt;

	if (n > 0)
	{
		while (hgt-- > 0)
		{
			wdt = n;

			while (wdt-- > 0)
				_putchar('#');

			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
