#include "sort.h"

/**
 * swapNodes - Swap two nodes in a doubly linked list
 *
 * @list: pointer to a pointer to the head of the list
 *
 * @first: node to swap with second
 *
 * @second: node to swap with first
 */
void swapNodes(listint_t **list, listint_t *first, listint_t *second)
{
	if (first == NULL || second == NULL)
		return;

	if (first->prev != NULL)
		first->prev->next = second;

	if (second->next != NULL)
		second->next->prev = first;

	first->next = second->next;
	second->prev = first->prev;
	first->prev = second;
	second->next = first;

	if (*list == first)
		*list = second;
}

/**
 * insertion_sort_list - Sorting a doubly linked list with insertion sort
 *
 * @list: pointer to a pointer to the head of a list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *countingNode = NULL;
	listint_t *prevNode = NULL;
	listint_t *nextNode = NULL;

	if (list == NULL || (*list)->next == NULL)
		return;
	countingNode = (*list)->next;
	while (countingNode != NULL)
	{
		prevNode = countingNode->prev;
		nextNode = countingNode->next;
		while (prevNode != NULL && prevNode->n > countingNode->n)
		{
			swapNodes(list, prevNode, countingNode);
			print_list(*list);
			prevNode = countingNode->prev;
		}

		countingNode = nextNode;
	}
}
