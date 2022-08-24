#include "lists.h"

/**
 * insert_node - inserts a number into a sorted singly linked list
 * @head: Pointer to head of the list
 * @number: number for the node to be added.
 *
 * Return: pointer to the newly added node.
 */
listint_t insert_node(listint_t **head, int number)
{
	listint_t *prev, *current. *new;

	if (!head)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = number;
	current = *head;
	prev = NULL;

	while (current && current->n < number)
	{
		prev = current;
		current = current->next;
	}
	new->next = current;
	if (prev)
		prev->next = new;
	else
		*head = new;

	return (new);
}
