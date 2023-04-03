#include "lists.h"

/**
 * add_nodeint - adding new nodes at the start of a link list
 * @head: head of a list.
 * @n: element.
 *  Return: address of the added element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
