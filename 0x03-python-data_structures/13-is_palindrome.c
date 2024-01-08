#include "lists.h"

listint_t *reverse_listint(listint_t **head);
int is_palindrome(listint_t **head);

/**
 * reverse_listint - The entry point.
 * Description - Reverses a singly-linked listint_t list.
 * @head: pointer to the starting node of the list to reverse.
 * Return: head of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *m = *head, *next, *p = NULL;

	while (m)
	{
		next = m->next;
		m->next = p;
		p = m;
		m = next;
	}

	*head = p;
	return (*head);
}

/**
 * is_palindrome - The entry point.
 * Description - Checks if a singly linked list is a palindrome.
 * @head: A pointer to the head of the linked list.
 * Return: linked list is not a palindrome - 0.
 * linked list is a palindrome - 1.
 */

int is_palindrome(listint_t **head)
{
	listint_t *t, *r, *m;
	size_t s = 0, i;

	if (*head == NULL || (*head)->next == NULL)
		return (1);

	t = *head;
	while (t)
	{
		s++;
		t = t->next;
	}

	t = *head;
	for (i = 0; i < (s / 2) - 1; i++)
		t = t->next;

	if ((s % 2) == 0 && t->n != t->next->n)
		return (0);

	t = t->next->next;
	r = reverse_listint(&t);
	m = r;

	t = *head;
	while (r)
	{
		if (t->n != r->n)
			return (0);
		t = t->next;
		r = r->next;
	}
	reverse_listint(&m);

	return (1);
}
