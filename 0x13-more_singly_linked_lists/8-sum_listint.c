#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - returns the sum of all the data (n) of a list .
 * @h: A pointer to the head of the list.
 *
 * Return: the sum of data(n).
 */

int sum_listint(listint_t *head)
{
    int sum = 0;
    listint_t *current = head;
    while (current != NULL)
    {
        sum += current->n;
        current = current->next;
    }
    return sum;
}