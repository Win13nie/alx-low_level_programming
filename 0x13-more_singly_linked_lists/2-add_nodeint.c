#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: head of file
 * @n: number of elements
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	size_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return(NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
