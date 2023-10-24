#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - frees a list  .
 * @h: A pointer to the head of the list.
 *
 * Return: the size of the list that was free'd.
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