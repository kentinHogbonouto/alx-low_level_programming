#include "main.h"

/**
 * print_line - draws a straight line using the character _
 * @n: the number of _ characters to be printes
 */
void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			_putchar('_');
	}

	_putchar('\n');
}
