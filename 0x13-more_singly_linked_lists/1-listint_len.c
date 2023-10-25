#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * listint_len - Counts the number of elements in a listint_t list.
 * @h: A pointer to the head of the list.
 *
 * Description:
 * This function counts and returns the number of elements (nodes) in a
 * listint_t linked list. It traverses the list and increments a count
 * for each node encountered.
 *
 * Return:
 * The number of nodes in the list.
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
