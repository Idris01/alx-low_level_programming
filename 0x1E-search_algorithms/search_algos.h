#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <math.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array_binary(int *array, size_t start, size_t end);
int jump_search(int *array, size_t size, int value);
void print_jump_check(size_t index, int value);
int search_block(int *array, size_t start, size_t end, int val);
void print_jump_found(size_t start, size_t end);

#endif
