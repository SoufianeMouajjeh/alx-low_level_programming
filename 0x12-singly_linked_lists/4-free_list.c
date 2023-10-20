#include <stdio.h>
#include <stdlib.h>
#include"lists.h"
/**
 * free_list - Frees a list_t list.
 * @head: A pointer to the head of the list.
 */
void free_list(list_t *head){
    if (head == NULL){
        return;
    }
}
free_list(head->next);
if (head->str != NULL)
{
    free(head->str);
}
free(head);
