#include "search_algos.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>


/**
 *jump_search - searches a value using jump search algo
 *@array: array to be searched
 *@size: size of the array
 *@value: value of to be searched
 *Return: if found its index else -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump;
	size_t prev = 0;
	size_t point = 0;
	int min;

	if (array == 0 || size <= 0)
		return (-1);
	jump = sqrt(size);
	/*Perform jump until value is greater than values in the array*/
	printf("Value checked array[%ld] = [%d]\n", point, array[point]);
	point = jump;
	min = fmin(point, size);
	while (array[min] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", point, array[point]);
		prev = point;
		point = point + jump;
		if (prev >= size)
			return (-1);
		min = fmin(point, size);
	}
	printf("Value found between indexes [%ld] and [%ld]\n", prev, point);

	/*Perform forward propagation until the element is found*/
	while (array[prev] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		prev++;
		if (array[prev] != value && prev == fmin(point, size))
			return (-1);
	}

	if (array[prev] == value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		return (prev);
	}
	else
		return (-1);
}
