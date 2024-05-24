#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked linked listint_t
 * list
 * @h: A pointer to the first element on list.
 *
 * Return: number of elements in list.
 */

size_t listint_len(const listint_t *h)
{
	int count;

	count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
