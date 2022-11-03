#include "search_algos.h"
#include <stdio.h>
#include "search_algos.h"
#include <math.h>
/**
 *exponential_search - searches an array using exponential search
 *@array: array to be searched
 *@size: size of array
 *@value: value to be searched
 *Return: if found return its index else -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t exp;
	size_t min;

	if (array == 0 || size == 0)
		return (-1);
	exp = 1;
	while (exp < size && array[exp] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", exp, array[exp]);
		exp = exp * 2;
	}
	if (exp < size - 1)
		min = exp;
	else
		min = size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", exp / 2, min);
	return (type2_binary_search(array, exp / 2, min, value));
}
/**
 *type2_binary_search - uses binary search to search for the value
 *@array: pointer to the first element of the array to search in
 *@left: start point of search
 *@right: end point of search
 *@value: value to search for
 *Return: index where value is located else -1
 */
int type2_binary_search(int *array, size_t left, size_t right, int value)
{
	size_t mid;

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
