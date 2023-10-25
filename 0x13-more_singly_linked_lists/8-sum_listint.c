#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - Computes the sum of all 'n' values in a listint_t linked list.
 * @head: A pointer to the head of the list.
 *
 * Description:
 * This function takes a pointer to the head of a listint_t linked list and
 * iterates through the list to calculate the sum of all 'n' values in the
 * nodes. If the list is empty, it returns 0.
 *
 * Return: The sum of all 'n' values list.If list is empty, return 0.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
