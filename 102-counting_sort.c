#include "sort.h"
#include <stdlib.h>

/**
 * find_max - finds the maximum value in an array
 * @array: array of integers
 * @size: number of elements in array
 * Return: maximum integer in array
 */
static int find_max(int *array, size_t size)
{
	size_t i;
	int max = array[0];

	for (i = 1; i < size; i++)
	{
		if (array[i] > max)
			max = array[i];
	}
	return (max);
}

/**
 * counting_sort - sorts an array of integers in ascending order
 *                 using counting sort algorithm
 * @array: array of integers
 * @size: number of elements in array
 */
void counting_sort(int *array, size_t size)
{
	int *count, *output;
	size_t i;
	int max;

	if (!array || size < 2)
		return;

	max = find_max(array, size);

	/* Allocate counting array */
	count = malloc(sizeof(int) * (max + 1));
	if (!count)
		return;

	for (i = 0; i <= (size_t)max; i++)
		count[i] = 0;

	/* Count occurrences */
	for (i = 0; i < size; i++)
		count[array[i]]++;

	/* Cumulative count */
	for (i = 1; i <= (size_t)max; i++)
		count[i] += count[i - 1];

	/* Print counting array */
	print_array(count, max + 1);

	/* Allocate output array */
	output = malloc(sizeof(int) * size);
	if (!output)
	{
		free(count);
		return;
	}

	/* Build output array (stable) */
	for (i = size; i > 0; i--)
	{
		output[count[array[i - 1]] - 1] = array[i - 1];
		count[array[i - 1]]--;
	}

	/* Copy back to original array */
	for (i = 0; i < size; i++)
		array[i] = output[i];

	free(count);
	free(output);
}

