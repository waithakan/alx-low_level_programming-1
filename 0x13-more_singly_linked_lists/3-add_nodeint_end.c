#include "lists.h"
/**
 * add_nodeint_end - add nodes st the end od lists
 * @head: point to the first element in the list
 * @n: value to be kept on the element
 * Return: return the new node or nul if failed to add.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
