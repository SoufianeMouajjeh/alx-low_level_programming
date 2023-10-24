#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - deletes the node at index of a list .
 * @h: A pointer to the head of the list.
 *
 * Return: 1 if succeeded -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    listint_t *current = *head;
    listint_t *prev = NULL;
    unsigned int current_index = 0;
    listint_t *old_head = *head;

    if (*head == NULL)
    {
        return -1;
    }
    if (index == 0)
    {
        *head = (*head)->next;
        free(old_head);
        return 1;
    }
    while (current != NULL && current_index < index)
    {
        prev = current;
        current = current->next;
        current_index++;
    }
    if (current_index == index && current != NULL)
    {
        prev->next = current->next;
        free(current);
        return 1;
    }
    else
    {
        return -1;
    }
}