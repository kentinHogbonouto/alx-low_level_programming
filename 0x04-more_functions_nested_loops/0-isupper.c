#include "main.h"

/**
 * _isupper - check if a character is uppercase
 *
 * @d: int is the char
 * Return: 1 if d is uppercase, 0 is otherwise
 */
int _isupper(int d)
{
	int isUpper = 0;

	if (d >= 'A' && d <= 'Z')
		isUpper = 1;

	return (isUpper);
}
