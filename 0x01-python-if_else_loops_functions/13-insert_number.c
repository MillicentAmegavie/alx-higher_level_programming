#include "lists.h"

/**
 * insert_node - the entry point
 * Description - nserts a number into a sorted singly-linked list.
 * @head: head of the linked list.
 * @number: The number to insert.
 * Return: pointer to the new node,otherwise NULL on failure.
 */

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *m = *head, *o;

	o = malloc(sizeof(listint_t));
	if (o == NULL)
		return (NULL);
	o->n = number;

	if (m == NULL || m->n >= number)
	{
		o->next = m;
		*head = o;
		return (o);
	}

	while (m && m->next && m->next->n < number)
		m = m->next;

	o->next = m->next;
	m->next = o;

	return (o);
}
