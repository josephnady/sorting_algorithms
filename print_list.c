#include "sort.h"

/**
 * print_list - Print alist of integers
 *
 * @list: list to be printed
 * Return: None
 */
void print_list(const listint_t *list)
{
	int i;

	i = 0;
	while (list)
	{
		if (i > 0)
			printf(", ");
		printf("%d", list->n);
		++i;
		list = list->next;
	}
	printf("\n");
}
