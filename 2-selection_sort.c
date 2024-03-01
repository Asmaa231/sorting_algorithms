#include "sort.h"

/**
*selection_sort - function sorts an array of integers in ascending order
*@array: array of ints
*@size: size of array
*/
void selection_sort(int *array, size_t size)
{
	size_t i, m, k;
	int tmp;

	if (!array || !size)
		return;
	for (i = 0; i < size - 1; i++)
	{
		for (m = size - 1, k = i + 1; m > i; m--)
		{
			if (array[m] < array[k])
			{
				k = m;
			}
		}
		if (array[i] > array[k])
		{
			tmp = array[i];
			array[i] = array[k];
			array[k] = tmp;
			print_array(array, size);
		}
	}
}
