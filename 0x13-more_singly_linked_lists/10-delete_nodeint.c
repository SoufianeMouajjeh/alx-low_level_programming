#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes th node specified position listint_t list.
 * @head: A pointer to a pointer to the head of the list.
 * @index: The index of the node to delete (starting from 0).
 *
 * Description:
 * This function deletes the node at the given index listint_t linked list.
 * If the index is invalid (e.g., larger than the list size or negative), the
 * function does not delete node and returns -1. If the deletion succeeds,it
 * returns 1.
 *
 * Return: 1 if the node was successfully deleted, -1 if it fails.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *prev = NULL;
	unsigned int current_index = 0;
	listint_t *old_head = *head;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(old_head);
		return (1);
	}
	while (current != NULL && current_index < index)
	{
		prev = current;
		current = current->next;
		current_index++;
	}
	if (current_index == index && current != NULL)
	{
		prev->next = current->next;
		free(current);
		return (1);
	}
	else
	{
		return (-1);
	}
}
