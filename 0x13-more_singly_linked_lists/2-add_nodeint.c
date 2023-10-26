#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 * @head: A pointer to a pointer to the head of the list.
 * @n: The integer value to store in the new node.
 *
 * Description:
 * This function creates a new node with the given integer value and adds it
 * to the beginning of a `listint_t` linked list. It updates the head pointer
 * to point to the new node.
 *
 * Return: A pointer to the newly added node, NULL if memory allocation fails.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
