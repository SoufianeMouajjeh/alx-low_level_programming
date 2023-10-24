#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - reverses a list  .
 * @h: A pointer to the head of the list.
 *
 * Return: a pointer to the first node of the revesed list.
 */

listint_t *reverse_listint(listint_t **head)
{
    listint_t *prev = NULL, *next;
    listint_t *current = *head;

    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *head = prev;
    return (prev);
}