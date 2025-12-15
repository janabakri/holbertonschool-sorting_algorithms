#include "sort.h"

/**
 * swap_nodes - swaps two adjacent nodes in a doubly linked list
 * @list: pointer to the head of the list
 * @left: first node
 * @right: second node
 */
static void swap_nodes(listint_t **list, listint_t *left, listint_t *right)
{
	if (left->prev)
		left->prev->next = right;
	else
		*list = right;

	if (right->next)
		right->next->prev = left;

	left->next = right->next;
	right->prev = left->prev;

	right->next = left;
	left->prev = right;
}

/**
 * forward_pass - performs a forward cocktail pass
 * @list: pointer to the head of the list
 * Return: pointer to last node visited
 */
static listint_t *forward_pass(listint_t **list)
{
	listint_t *curr = *list;
	int swapped = 0;

	while (curr->next)
	{
		if (curr->n > curr->next->n)
		{
			swap_nodes(list, curr, curr->next);
			print_list(*list);
			swapped = 1;
		}
		else
			curr = curr->next;
	}

	return (swapped ? curr : NULL);
}

/**
 * backward_pass - performs a backward cocktail pass
 * @list: pointer to the head of the list
 * @curr: starting node
 * Return: 1 if swapped, 0 otherwise
 */
static int backward_pass(listint_t **list, listint_t *curr)
{
	int swapped = 0;

	while (curr->prev)
	{
		if (curr->n < curr->prev->n)
		{
			swap_nodes(list, curr->prev, curr);
			print_list(*list);
			swapped = 1;
		}
		else
			curr = curr->prev;
	}

	return (swapped);
}

/**
 * cocktail_sort_list - sorts a doubly linked list using
 *                      Cocktail shaker sort algorithm
 * @list: pointer to the head of the list
 */
void cocktail_sort_list(listint_t **list)
{
	listint_t *curr;
	int swapped = 1;

	if (!list || !*list || !(*list)->next)
		return;

	while (swapped)
	{
		swapped = 0;

		curr = forward_pass(list);
		if (!curr)
			break;

		swapped = backward_pass(list, curr);
	}
}

