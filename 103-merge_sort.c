#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * merge - merge two sorted subarrays into one
 * @array: array to merge
 * @tmp: temporary array
 * @left: left index of subarray
 * @mid: middle index
 * @right: right index of subarray
 */
static void merge(int *array, int *tmp, size_t left, size_t mid, size_t right)
{
	size_t i, j, k;

	printf("Merging...\n[left]: ");
	for (i = left; i <= mid; i++)
	{
		printf("%d", array[i]);
		if (i != mid)
			printf(", ");
	}
	printf("\n[right]: ");
	for (i = mid + 1; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i != right)
			printf(", ");
	}
	printf("\n");

	i = left;
	j = mid + 1;
	k = left;

	while (i <= mid && j <= right)
	{
		if (array[i] <= array[j])
			tmp[k++] = array[i++];
		else
			tmp[k++] = array[j++];
	}

	while (i <= mid)
		tmp[k++] = array[i++];
	while (j <= right)
		tmp[k++] = array[j++];

	for (i = left; i <= right; i++)
		array[i] = tmp[i];

	printf("[Done]: ");
	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i != right)
			printf(", ");
	}
	printf("\n");
}

/**
 * merge_sort_recursive - recursive merge sort implementation
 * @array: array to sort
 * @tmp: temporary array
 * @left: left index
 * @right: right index
 */
static void merge_sort_recursive(int *array, int *tmp, size_t left, size_t right)
{
	size_t mid;

	if (left >= right)
		return;

	mid = left + (right - left) / 2;
	merge_sort_recursive(array, tmp, left, mid);
	merge_sort_recursive(array, tmp, mid + 1, right);
	merge(array, tmp, left, mid, right);
}

/**
 * merge_sort - sorts an array of integers using top-down merge sort
 * @array: array to sort
 * @size: size of array
 */
void merge_sort(int *array, size_t size)
{
	int *tmp;

	if (!array || size < 2)
		return;

	tmp = malloc(sizeof(int) * size);
	if (!tmp)
		return;

	merge_sort_recursive(array, tmp, 0, size - 1);

	free(tmp);
}

