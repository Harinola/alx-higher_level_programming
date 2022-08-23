#include "lists.h"

/**
 * check_cycle - checks if a singly linked list has a cycle or not
 * @list: pointer to the head of the list.
 *
 * Return: 1 if cycle exists, 0 if not.
 */
int check_cycle(listint_t *list)
{
	listint_t *current, *temp;

	current = list;
	temp = current->next;
	while (current && temp)
	{
		while (temp)
		{
			if (temp == current)
				return (1);
			temp = temp->next;
		}
		current = current->next;
		temp = current->next;
	}
	return (0);
}
