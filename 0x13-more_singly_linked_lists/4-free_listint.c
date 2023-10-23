#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - free the list .
 * @h: A pointer to the head of the list.
 *
 * Return: free current.
 */

void gree_listint(listint_t *head)
{
    listint_t *current;
    while(head != NULL){
        current = head;
        head = head->next;
        free(current);
    }
}