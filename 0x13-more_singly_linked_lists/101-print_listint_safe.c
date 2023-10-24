#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints a listint_t linked list .
 * @h: A pointer to the head of the list.
 *
 * Return: the number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
    size_t count = 0;
    const listint_t *current = head;

    while (current != NULL)
    {
        printf("[%p] %d\n", (void *)current, current->n);
        count++;

        if (current->next >= current)
        {
            fprintf(stderr, "Linked list has a loop\n");
            exit(98);
        }
        current = current->next;
    }
    return count;
}