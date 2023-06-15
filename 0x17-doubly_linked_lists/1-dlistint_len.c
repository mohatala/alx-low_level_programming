#include "lists.h"

/**
 * dlistint_len - returns the number of elements
 * @h: pointer to the head of the list
 *
 * Return: nb of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int c = 0;

	if (h == NULL)
		return (c);

	while (h != NULL)
	{
		c++;
		h = h->next;
	}

	return (c);
}
