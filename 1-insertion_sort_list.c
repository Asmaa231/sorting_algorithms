#include "sort.h"

/**
*swap - function swaps 2 nodes in d linked list
*@a: 1st node address
*@b: 2nd node adress
*Return: void
*/
void swap(listint_t *a, listint_t *b)
{
	if (a->prev)
		a->prev->next = b;
	if (b->next)
		b->next->prev = a;
	a->next = b->next;
	b->prev = a->prev;
	a->prev = b;
	n->next = a;
}

/**
*insertion_sort_list - function sorts a d linked list of int ascendingly
*@list: poiter address to head node
*Return: void
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *i, *m;

	if (!list || !*list || !(*list)->next)
		return;
	i = (*list)->next;
	while (i)
	{
		m = i;
		i = i->next;
		while (m && m->prev)
		{
			if (m->prev->n > m->n)
			{
				swap(m->prev, m);
				if (!m->prev)
					*list = m;
				print_list((const listint_t *)*list);
			}
			else
				m = m->prev;
		}
	}
}
