#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - Removes and returns the head node of a listint_t list.
 * @head: A pointer to a pointer to the head of the list.
 *
 * Description:
 * This function removes the first node (head) of a `listint_t` linked list.
 * It returns the integer value stored in the head node and updates the head
 * pointer to the new head (the second node in the list).
 *
 * Return:
 * The integer value stored in the removed head node, or 0 if the list is empty.
 */

int pop_listint(listint_t **head)
{
	int data;

	listint_t *old_head;

	if (*head == NULL)
		return (0);
	data = (*head)->n;
	old_head = *head;
	*head = (*head)->next;
	free(old_head);
	return (data);
}
