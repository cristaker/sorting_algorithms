#ifndef _SORT_
#define _SORT_

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - Doubly linked list node
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 * **/
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* helper functions*/
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/*algprithms*/
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void qs(int *a, int low, int high, int size);
void shell_sort(int *array, size_t size);
void _ssort(int *a, int size, int n);

#endif
