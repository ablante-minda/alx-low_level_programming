#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node - adds a new node at the begining
 * @head: a pointer th the head of the list_t list
 * @str: the string to be added to the list_t list
 *
 * Return: if the function falls - NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int length = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = strdup(str);
	while (str[length] != '\0')
	{
		length++;
	}
	new->len = length;
	if (*head != NULL)
		new->next = *head;
	if (*head == NULL)
		new->next = NULL;
	*head = new;
	return (*head);
}

