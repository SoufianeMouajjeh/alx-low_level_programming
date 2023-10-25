#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_nodeint_at_index - Returns the nth node of a listint_t list.
 * @head: A pointer to the head of the list.
 * @index: The index of the node to retrieve.
 *
 * Description:
 * This function retrieves the node at a specific index in a `listint_t`
 * linked list. The index is zero-based, where 0 refers to the head node.
 * It iterates through the list and returns a pointer to the desired node.
 *
 * Return:
 * If the node is found, a pointer to the node; otherwise, NULL if the
 * node at the given index does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int current_index = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		if (current_index == index)
		{
			return (current);
		}
		current = current->next;
		current_index++;
	}
	return (NULL);
}
