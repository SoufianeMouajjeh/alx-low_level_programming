#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - finds the loop in a liked list  .
 * @h: A pointer to the head of the list.
 *
 * Return: the addres of the node where the loop starts, or NULL if there is no loop.
 */

listint_t *find_listint_loop(listint_t *head)
{
    listint_t *tortoise = head;
    listint_t *hare = head;

    while (tortoise != NULL && hare != NULL && hare->next != NULL)  
    {
        tortoise = tortoise->next;
        hare = hare->next->next;
        if (tortoise == hare)   
        {
            tortoise = head;
            while (tortoise != hare)   
            {
                tortoise = tortoise->next;
                hare = hare->next;
            }
            return hare;
        }
    }
    return NULL;
}