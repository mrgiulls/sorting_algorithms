#include "sort.h"

/**
 * change_nodes - changes the next node for the previous one
 * @list1: list1
 * @list2: list2
 * @list: doubly linked list
 *
 * Return: void
 */

void change_nodes(listint_t **list1, listint_t **list2, listint_t **list)
{
	listint_t *pr;
	listint_t *nxt;

	if (!(*list1) || !(*list2))
		return;
	pr = (*list1)->prev;
	nxt = (*list2)->next;
	if (pr)
	{
		pr->next = (*list2);
	}
	(*list2)->prev = pr;
	(*list2)->next = (*list1);
	(*list1)->prev = (*list2);
	(*list1)->next = nxt;
	if (nxt)
	{
		nxt->prev = (*list1);
	}
	*list1 = *list2;
	*list2 = (*list1)->next;
	if (!pr)
	{
		*list = *list1;
	}
}

/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 * @list: doubly linked list
 *
 * Return: void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *head = NULL;
	listint_t *node = NULL;
	listint_t *tmp = NULL;

	if (!list || (!((*list)->prev) && !((*list)->next)))
		return;
	head = *list;
	head = head->next;
	while (head)
	{
		node = head->prev;
		if (node->n > head->n)
		{
			change_nodes(&node, &head, list);
			print_list(*list);
			while (node->prev)
			{
				if ((node->n) < (node->prev->n))
				{
					tmp = node->prev;
					change_nodes(&tmp, &node, list);
					print_list(*list);
				}
				node = node->prev;
			}
		}
		head = head->next;
	}
}