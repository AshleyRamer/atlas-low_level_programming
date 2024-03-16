#include "lists.h"

/**
 * get_dnodeint_at_index - gets the nth node
 * @head: pointer
 * @index: index
 * Return: Success..address of node, Failure..NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (head && i < index)
	{
		head = head->next;
		i++;
	}

	return (head);
}
