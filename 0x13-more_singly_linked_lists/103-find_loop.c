#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * find_listint_loop - Finds a loop in a listint_t linked list.
 * @head: A pointer to the head of the list.
 *
 * Description:
 * This function checks for the existence of a loop in a listint_t linked list
 * using Floyd Cycle Detection Algorithm (tortoise and hare). oop is found,
 * it returns address node where loop starts; otherwise, returns NULL.
 *
 * Return: The address node where loop starts, NULL if there is no loop.
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