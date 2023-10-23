#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - returns the number of elements a linked .
 * @h: A pointer to the head of the list.
 *
 * Return: The number of nodes.
 */

size_t listint_len(const listint_t *h)
{
    size_t count = 0;
    while (h!= NULL)
    {
        h = h->next;
        count++;
    }
    return count;
}