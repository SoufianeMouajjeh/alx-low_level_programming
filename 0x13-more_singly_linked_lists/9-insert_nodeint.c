 #include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts node at a specified in a listint_t list.
 * @head: A pointer to a pointer to the head of the list.
 * @idx: The index where the new node should be inserted (starting from 0).
 * @n: The integer value to store in the new node.
 *
 * Description:
 * This function inserts a new node with the specified integer value at the
 * given index in a listint_t linked list. If the index is invalid larger
 * than the list size or negative), the function does not add the new node and
 * returns NULL. If memory allocation new node fails, it also returns NULL.
 *
 * Return: The address the new node if successfully added or NULL if it fails.
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