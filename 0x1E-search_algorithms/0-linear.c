#include "search_algos.h"
#include "stdio.h"

/**
*linear_search: Function that search for a value in an array
*@array: A pointer to the first element of the array to search in
*@size: Number of element in array
*@value: A Value to search for
*
*/
int linear_search(int *array, size_t size, int value)
{
    size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
