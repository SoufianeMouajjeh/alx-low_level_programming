#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint2 - Frees a listint_t list and sets the head pointer to NULL.
 * @head: A pointer to a pointer to the head of the list.
 *
 * Description:
 * This function takes a pointer to the head of a `listint_t` linked list and
 * frees all the memory allocated for the nodes in the list. It also sets
 * the head pointer to NULL, indicating that the list is now empty.
 *
 * Return: void (no return value)
 */

void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *ptr;

	current = *head;

	while (current != NULL)
	{
		ptr = current->next;
		free(current);
		current = ptr;
	}
	*head = NULL;
}
