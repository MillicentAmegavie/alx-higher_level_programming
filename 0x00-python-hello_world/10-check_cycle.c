#include <stdlib.h>
#include "lists.h"

/**
 * check_cycle - The entry point.
 * Description - Checks if a singly-linked list contains a cycle.
 * @list: singly-linked list.
 * Return: 0 on no cycle, otherwise 1.
 */

int check_cycle(listint_t *list)
{
	listint_t *m, *k;

	if (list == NULL || list->next == NULL)
		return (0);

	m = list->next;
	k = list->next->next;

	while (m && k && k->next)
	{
		if (m == k)
			return (1);

		m = m->next;
		k = k->next->next;
	}

	return (0);
}
