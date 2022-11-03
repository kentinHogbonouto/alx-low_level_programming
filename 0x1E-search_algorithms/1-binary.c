#include "search_algos.h"
#include <stdio.h>


/**
 *binary_search - uses binary search to search for the value
 *@array: pointer to the first element of the array to search in
 *@size: size of array
 *@value: value to search for
 *Return: index where value is located else -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left, right, mid;

	left = 0;
	right = size - 1;
	if (array == 0)
		return (-1);
	while (!(left > right))
	{
		printf("Searching in array: ");
		print_array(array, left, right);
		mid = (left + right) / 2;
		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
		else
			return (mid);
	}
	return (-1);
}

/**
 *print_array - prints an array
 *@array: array to print
 *@left: start index for print
 *@right: end index for print
 *Return: void
 */
void print_array(int *array, size_t left, size_t right)
{
	while (left <= right)
	{
		printf("%d", array[left]);
		if (left != right)
			printf(", ");
		left++;
	}
	printf("\n");
}
