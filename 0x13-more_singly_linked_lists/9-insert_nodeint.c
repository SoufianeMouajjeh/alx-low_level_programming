 #include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - inserts a new node at a given position .
 * @h: A pointer to the head of the list.
 *
 * Return: the sum of data(n).
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    listint_t *current = *head;
    listint_t *prev = NULL;
    unsigned int current_index = 0;

    listint_t *new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
    {
        return NULL;
    }
    new_node->n = n;
    if (idx == 0)
    {
        new_node->next = *head;
        *head = new_node;
        return new_node;
    }
    while (current != NULL && current_index < idx)
    {
        prev = current;
        current = current->next;
        current_index++;
    }
    if (current_index == idx)
    {
        prev->next = new_node;
        new_node->next = current;
        return new_node;
    }
    else
    {
        free(new_node);
        return NULL;
    }
}