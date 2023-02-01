#include "lists.h"

/**
 * add_nodeint - adds a new node at the begining
 * @head: a pointer to the addres of the head
 * @n: the intiger for the new node to contain
 *
 * Return: if the functions fall - NULL
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

	return (new);
}
