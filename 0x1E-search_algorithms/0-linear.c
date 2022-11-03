#include "search_algos.h"
#include <stdio.h>


/**
 *linear_search - function that searches for a value linearly
 *@array: array to search value in
 *@size: size of array
 *@value: value to be searched
 *Return: if value is found returns the index, else -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;


	if (array == 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
