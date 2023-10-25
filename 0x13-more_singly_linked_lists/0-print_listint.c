#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint - Prints all elements of a listint_t list.
 * @h: A pointer to the head of the list.
 *
 * Description: This function prints all the elements of a listint_t linked
 * list. It will traverse the list and print the integer values in each
 * node, separated by a newline character.
 *
 * Return: The number of nodes in the list.
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
	printf("%d\n", h->n);
	h = h->next;
	count++;
	}
	return (count);
}
