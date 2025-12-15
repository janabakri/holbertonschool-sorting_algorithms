#include "sort.h"
#include <stdlib.h>

/* Find the maximum value in the array */
static int find_max(int *array, size_t size)
{
	size_t i;
	int max = 0;

	for (i = 0; i < size; i++)
		if (array[i] > max)
			max = array[i];
	return (max);
}

/* Initialize counting array to zeros */
static int *init_count_array(int max)
{
	int *count = malloc(sizeof(int) * (max + 1));
	size_t i;

	if (!count)
		return (NULL);
	for (i = 0; i <= (size_t)max; i++)
		count[i] = 0;
	return (count);
}

/* Counting sort main function */
void counting_sort(int *array, size_t size)
{
	int *count, *output;
	size_t i;
	int max;

	if (!array || size < 2)
		return;

	max = find_max(array, size);
	count = init_count_array(max);
	if (!count)
		return;

	/* Count occurrences */
	for (i = 0; i < size; i++)
		count[array[i]]++;

	/* Cumulative count */
	for (i = 1; i <= (size_t)max; i++)
		count[i] += count[i - 1];

	print_array(count, max + 1);

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

