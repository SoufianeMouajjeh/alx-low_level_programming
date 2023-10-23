#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - free the list and stes the head to NULL .
 * @h: A pointer to the head of the list.
 *
 * Return: free current.
 */

void free_listint2(listint_t **head)    
{
    listint_t *current;
    listint_t *ptr;

    current = *head;

    while(current != NULL) 
    {
        ptr = current->next;
        free(current);
        current = ptr;
    }
    *head = NULL;
}
