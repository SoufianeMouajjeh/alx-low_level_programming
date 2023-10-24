#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - deletes the head of list .
 * @h: A pointer to the head of the list.
 *
 * Return: the head node's data(n).
 */

int pop_listint(listint_t **head)   
{
    int data;
    listint_t *old_head;

    if(*head == NULL)
        return (0);
    data = (*head)->n;
    old_head = *head;
    *head = (*head)->next;
    free(old_head);
    return data;
}
