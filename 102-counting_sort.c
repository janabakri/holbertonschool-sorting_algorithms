#include "sort.h"
#include <stdlib.h>

/**
 * find_max - finds the maximum value in an array
 * @array: array of integers
 * @size: number of elements in array
 * Return: the maximum integer in the array
 */
static int find_max(int *array, size_t size)
{
	size_t i;
	int max = 0;

	for (i = 0; i < size; i++)
		if (array[i] > max)
			max = array[i];
	return (max);
}

/**
 * init_count_array - allocates and initializes a counting array
 * @max: maximum value in original array
 * Return: pointer to counting array, or NULL on failure
 */
static int *init_count_array(int max)
{
	int *count;
	size_t i;

	count = malloc(sizeof(int) * (max + 1));
	if (!count)
		return (NULL);

	for (i = 0; i <= (size_t)max; i++)
		count[i] = 0;

	return (count);
}

/**
 * build_output_array - builds the sorted output array
 * @array: original array
 * @size: number of elements in array
 * @count: counting array
 * @output: output array to fill
 */
static void build_output_array(int *array, size_t size, int *count, int *output)
{
	size_t i;

	for (i = size; i > 0; i--)
	{
		output[count[array[i - 1]] - 1] = array[i - 1];
		count[array[i - 1]]--;
	}
}

/**
 * counting_sort - sorts an array of integers in ascending order
 *                 using the counting sort algorithm
 * @array: array of integers to sort
 * @size: number of elements in array
 */
void counting_sort(int *array, size_t size)
{
	int *count, *output;
	int max;

	if (!array || size < 2)
		return;

	max = find_max(array, size);

	count = init_count_array(max);
	if (!count)
		return;

	/* Count occurrences */
	for (size_t i = 0; i < size; i++)
		count[array[i]]++;

	/* Cumulative count */
	for (size_t i = 1; i <= (size_t)max; i++)
		count[i] += count[i - 1];

	/* Print counting array */
	print_array(count, max + 1);

	output = malloc(sizeof(int) * size);
	if (!output)
	{
		free(count);
		return;
	}

	build_output_array(array, size, count, output);

	/* Copy back to original array */
	for (size_t i = 0; i < size; i++)
		array[i] = output[i];

	free(count);
	free(output);
}

