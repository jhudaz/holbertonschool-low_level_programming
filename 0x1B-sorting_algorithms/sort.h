#ifndef SORT
#define SORT

#include <stdlib.h>
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void swap(listint_t *nodeL, listint_t *nodeR);
void selection_sort(int *array, size_t size);
int find_idx_min(int *array, int start, size_t size);
void quick_sort(int *array, size_t size);
void quick_sort_helper(int *arr, int start, int end, size_t size);
int lomuto_partition(int *arr, int start, int end, size_t size);
void shell_sort(int *arr, size_t size);
#endif
