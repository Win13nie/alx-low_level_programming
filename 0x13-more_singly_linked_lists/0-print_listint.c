#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: The listint_t list.
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nn = 0;
	
	while(h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nn++;
	}

	return (nn);
}
