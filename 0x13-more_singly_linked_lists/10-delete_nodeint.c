#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a given index
 * @head: a pointer to the addresss of the head of the list
 * @index: the index of the node to be deleted - indixes start at 0
 *
 * Return: on success - 1, on failure - -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *copy = *head;
	unsigned int node;

	if (copy == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(copy);
		return (1);
	}

	for (node = 0; node < (index - 1); node++)
	{
		if (copy->next == NULL)
			return (-1);

		copy = copy->next;
	}

	tmp = copy->next;
	copy->next = tmp->next;
	free(tmp);
	return (1);
}
