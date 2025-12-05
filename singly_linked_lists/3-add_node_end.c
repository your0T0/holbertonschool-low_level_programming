#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: double pointer to the head of the list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp;
	char *dup;
	unsigned int len = 0;

	if (head == NULL || str == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(dup);
		return (NULL);
	}

	new->str = dup;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = new;

	return (new);
}
