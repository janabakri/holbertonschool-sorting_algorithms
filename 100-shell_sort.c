#include "sort.h"

/**
 * shell_sort - Sorts an array of integers in ascending order
 *              using the Shell sort algorithm (Knuth sequence)
 * @array: Pointer to the array to sort
 * @size: Number of elements in the array
 */
void shell_sort(int *array, size_t size)
{
	size_t gap = 1, i, j;
	int temp;

	if (!array || size < 2)
		return;

	/* Generate the largest Knuth gap */
	while (gap < size / 3)
		gap = gap * 3 + 1;

	/* Reduce the gap */
	while (gap >= 1)
	{
		for (i = gap; i < size; i++)
		{
			temp = array[i];
			j = i;

			while (j >= gap && array[j - gap] > temp)
			{
				array[j] = array[j - gap];
				j -= gap;
			}
			array[j] = temp;
		}

		/* Print array after each gap reduction */
		print_array(array, size);

		gap = (gap - 1) / 3;
	}
}

