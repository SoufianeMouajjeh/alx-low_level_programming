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

<<<<<<< HEAD
=======
    current = *head;

>>>>>>> 51c3a5b4f9887e25343177d7cccc5a28c5f49bff
    while(current != NULL) 
    {
        ptr = current->next;
        free(current);
<<<<<<< HEAD
	current = ptr;
=======
        current = ptr;
>>>>>>> 51c3a5b4f9887e25343177d7cccc5a28c5f49bff
    }
    *head = NULL;
}
