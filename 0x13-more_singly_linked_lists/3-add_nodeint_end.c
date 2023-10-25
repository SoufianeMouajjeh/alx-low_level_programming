#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: A pointer to a pointer to the head of the list.
 * @n: The integer value to store in the new node.
 *
 * Description:
 * This function creates a new node with the given integer value and appends it
 * to the end of a listint_t linked list. If the list is empty, it becomes the
 * new head node.
 *
 * Return:
 * The address of the new node, or NULL if the node creation fails.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr;
	listint_t *current;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;

	if (*head == NULL)
		*head = ptr;
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = ptr;
	}
	return (ptr);
}
