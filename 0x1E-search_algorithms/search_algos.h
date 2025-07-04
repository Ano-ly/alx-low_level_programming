#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <math.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int rec(int l_o, int r_o, int m_o, int *array, int value);
void print_array(int l_o, int r_o, int *array);
int jump_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int my_advanced_binary(int low, int high, int *array, int value);
int my_rec(int l_o, int r_o, int m_o, int *array, int value);
void my_print_array(int l_o, int r_o, int *array);
int raise_em(int number, int power);

#endif /*SEARCH_ALGOS_H*/
