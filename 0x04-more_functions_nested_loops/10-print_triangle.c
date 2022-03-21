#include "main.h"

/**
 * print_triangle - prints a triangle, using the character #
 * @n: the size of the triangle
 */
void print_triangle(int n)
{
	int h, index;

	if (n > 0)
	{
		for (h = 1; h <= n; h++)
		{
			for (index = n - h; index > 0; index--)
				_putchar(' ');

			for (index = 0; index < h; index++)
				_putchar('#');

			if (h == n)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
