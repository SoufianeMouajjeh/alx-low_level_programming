#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list with safety checks.
 * @h: A pointer to a pointer to the head of the list.
 *
 * Description:
 * This function frees memory allocated listint_t linked list, ensuring
 * that it goes through the list only once. function sets the head to NULL
 * and returns the size of the list that was freed.
 *
 * Return: The size of the list that was freed.
 */

size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *current = *h;
	listint_t *temp;

	while (current != NULL)
	{
		size++;
		temp = current->next;
		free(current);
		current = temp;

		if (temp >= current)
		{
			fprintf(stderr, "Linked list has a loop\n");
			break;
		}
	}
	*h = NULL;

	return size;
}
