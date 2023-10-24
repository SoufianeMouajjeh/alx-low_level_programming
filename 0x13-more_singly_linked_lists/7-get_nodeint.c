#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - returns the nth node of a list .
 * @h: A pointer to the head of the list.
 *
 * Return: the nth node of list.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)    
{
    unsigned int current_index = 0;
    listint_t *current = head;

    while (current != NULL)
    {
        if (current_index == index)
        {
            return current;
        }
        current = current->next;
        current_index++;
    }
    return NULL;
}