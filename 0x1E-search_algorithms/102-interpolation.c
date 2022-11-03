#include "search_algos.h"
#include <stdio.h>

/**
 *interpolation_search - Search using interpolation
 *@array: array to be search value in
 *@size: size of array
 *@value: value to be searcheid
 *Return: index of the found value
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t pos;

	if (array == NULL)
		return (-1);
	while (array[low] != array[high] && (value >= array[low] &&
	       value <= array[high]))
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) *
			    (value - array[low]));
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] < value)
			low = pos + 1;
		else if (array[pos] > value)
			high = pos - 1;
		else
			return (pos);

	}

	if (value == array[low])
	{
		return (low);
	}
	else
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
		      * (value - array[low]));
		printf("Value checked array[%ld] is out of range\n", pos);
		return (-1);
	}
}
