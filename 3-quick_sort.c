#include "sort.h"

/**
 *quick_sort - function sorts an array of integers in ascending
 *@array: sorted int array
 *@size: array size
 *Return: void
*/
void quick_sort(int *array, size_t size)
{
	if (!array || !size)
		return;
	quicksort(array, size, 0, size - 1);
}

/**
 *quicksort - function quicksort for Lomuto partition scheme
 *@array: int array
 *@size: array size
 *@lo: low index of sort
 *@hi: high index of sort
 *Return: void
 */
void quicksort(int *array, size_t size, ssize_t lo, ssize_t hi)
{
	if (lo < hi)
	{
		size_t p = lomuto_partition(array, size, lo, hi);

		quicksort(array, size, lo, p - 1);
		quicksort(array, size, p + 1, hi);
	}
}

/**
 *lomuto_partition - function for lomuto
 *@array: int array
 *@size: array size
 *@lo: low index of sort range
 *@hi: high index of sort range
 *Return: ssize_t
 */
size_t lomuto_partition(int *array, size_t size, ssize_t lo, ssize_t hi)
{
	int i, j, pivot = array[hi];

	for (i = j = lo; j < hi; j++)
		if (array[j] < pivot)
			swapp(array, size, &array[j], &array[i++]);
	swapp(array, size, &array[i], &array[hi]);

	return (i);
}

/**
*swapp - function to swap
*@array: int array
*@size: array size
*@a: 1st value address
*@b: 2nd value address
*/
void swapp(int *array, size_t size, int *a, int *b)
{
	if (*a != *b)
	{
		*a = *a + *b;
		*b = *a - *b;
		*a = *a - *b;
		print_array((const int *)array, size);
	}
}
