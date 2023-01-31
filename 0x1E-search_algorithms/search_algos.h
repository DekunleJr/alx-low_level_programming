#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct skiplist_s
{
				int n;
				size_t index;
				struct skiplist_s *next;
				struct skiplist_s *express;
} skiplist_t;

typedef struct listint_s
{
		int n;
		size_t index;
		struct listint_s *next;
} listint_t;

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int help_binary(int *array, int value, size_t lo, size_t hi);
void array_print(int *array, size_t lo, size_t hi);
int jump_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);
#endif
