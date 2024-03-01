#include "sort.h"

/**
 * bubble_sort - function sorts an array of integers in ascending order
 * @array: array of ints
 * @size: size of array
 **/
void bubble_sort(int *array, size_t size)
{
	int tmp;
	size_t i, m;

	if (!array || !size)
		return;

	i = 0;
	while (i < size)
	{
		for (m = 0; m < size - 1; m++)
		{
			if (array[m] > array[m + 1])
			{
				tmp = array[m];
				array[m] = array[m + 1];
				array[m + 1] = tmp;
				print_array(array, size);
			}
		}
		i++;
	}
}
