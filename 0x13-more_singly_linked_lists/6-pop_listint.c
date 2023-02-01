#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t list
 * @head: a pointer to the address of the head
 *
 * Return: if the linked list is empty - 0
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int ret;

	if (*head == NULL)
		return (0);

	tmp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (ret);
}
