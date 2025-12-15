#include "sort.h"

/**
 * partition - Lomuto partition
 * @a: array
 * @s: size
 * @l: low
 * @h: high
 * Return: partition index
 */
int partition(int *a, size_t s, int l, int h)
{
	int p = a[h], i = l - 1, j, t;

	for (j = l; j < h; j++)
	{
		if (a[j] < p)
		{
			i++;
			if (i != j)
			{
				t = a[i];
				a[i] = a[j];
				a[j] = t;
				print_array(a, s);
			}
		}
	}
	if (a[i + 1] > a[h])
	{
		t = a[i + 1];
		a[i + 1] = a[h];
		a[h] = t;
		print_array(a, s);
	}
	return (i + 1);
}

/**
 * qs - Recursive quick sort
 * @a: array
 * @s: size
 * @l: low
 * @h: high
 */
void qs(int *a, size_t s, int l, int h)
{
	int p;

	if (l < h)
	{
		p = partition(a, s, l, h);
		qs(a, s, l, p - 1);
		qs(a, s, p + 1, h);
	}
}

/**
 * quick_sort - Sorts array with quick sort
 * @array: array
 * @size: size
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	qs(array, size, 0, size - 1);
}
