#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint - Frees a listint_t list.
 * @head: A pointer to the head of the list.
 *
 * Description:
 * This function takes a pointer to the head of a `listint_t` linked list and
 * frees all the memory allocated for the nodes in the list. It iterates
 * through the list, releases the memory for each node, and sets the head
 * pointer to NULL.
 *
 * Return: void (no return value)
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
	free(current);
	}
}
