#include "lists.h"

/**
 * listint_len - prints all tge elements
 * @h: The listint_t list.
 * Return: returns the number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t element = 0;

	while(h != NULL)
	{
		h = h->next;
		element++;
	}
	return (element);
}
