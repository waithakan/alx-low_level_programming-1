#include "lists.h"
/**
 * get_nodeint_at_index - retuns the node of an index
 * @head: points to the forst node to the linked list
 * @index: the node to be returned
 *
 * Return: points to thre node to be replaced
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp ? temp : NULL);
}
