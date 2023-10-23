#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - adds a new node at the and of a list .
 * @h: A pointer to the head of the list.
 *
 * Return: The number of nodes.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *ptr;
    listint_t *current;
    
    ptr = malloc(sizeof(listint_t));
    if (ptr == NULL)
    {
        return (NULL);
    }
    ptr->n = n;
    ptr->next = NULL;

    if(*head == NULL)
    {
        *head = ptr;
    }
    else
    {
        current = *head;
        while (current->next != NULL);
        {
            current = current->next;
        }
        current->next = ptr;
    }
    return ptr;
}