#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: The listint_t list.
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t elements = 0;
	
	while(h != NULL)
	{
		h = h->next;
		elements++;
	}

	return elements;
}
