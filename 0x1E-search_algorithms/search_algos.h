#ifndef LINEAR_SEARCH_H
#define LINEAR_SEARCH_H

#include <stddef.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int *array, size_t left, size_t right);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int type2_binary_search(int *array, size_t left, size_t right, int value);

#endif/* LINEAR_SEARCH_H */
