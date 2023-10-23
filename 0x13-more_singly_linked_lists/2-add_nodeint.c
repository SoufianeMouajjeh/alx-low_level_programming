#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - adds a new node at the beginning of a list .
 * @h: A pointer to the head of the list.
 *
 * Return: The number of nodes.
 */

listint_t *add_nodeint(listint_t **head, const int n)  
{
    listint_t *new_node;

    new_node = malloc(sizeof(listint_t));
    if(new_node == NULL)    
    {
        return (NULL);
    }
    new_node->n = n;
    new_node->next = *head;
    *head =new_node;

    return new_node;
}