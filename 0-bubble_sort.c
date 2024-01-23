#include "sort.h"

/**
 * bubble_sort - sort array based on bubble sort algorithm
 *
 * @array: array to be sorted
 * @size: number of elements in the @array
 * Return: None
 */
void bubble_sort(const int *array, size_t size)
{
	size_t i, j, n;
	int * a;

	a = (int*)array;
	n = size;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - 1; j++)
		{
			/* swap */
			if (a[j] > a[j + 1])
			{
				int tmp;

				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
				print_array(a, size);
			}
		}
	}
}
