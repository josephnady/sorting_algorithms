#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - Double linked list node
 *
 * @n: Integer stored in the node
 * @prev: pointer to the previous node
 * @next: pointer to the next node
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;
/* --------- Util ---------- */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/* --------- Algorithm function ---------- */
void bubble_sort(const int *array, size_t size);
void insertion_sort_list(listint_t **list);


#endif /* SORT_H */
