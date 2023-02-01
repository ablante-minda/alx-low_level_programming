#include "lists.h"

/**
 * get_nodeint_at_index - locates a given node of alistint_t linked list
 * @head: a pointer to the haed of the listint_t list
 * @index: the index of the node to locate - indexes at start at 0.
 *
 * Return: if the nodes not exist - NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}
	return (head);
}
