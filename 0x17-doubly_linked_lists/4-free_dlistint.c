#include"lists.h"
/**
 * free_dlistint - Frees a dlistint_t list.
 * @head: Pointer to the head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *adv;

	if (head == NULL)
		return;
	while (head->prev)
		head = head->prev;
	while (head)
	{
		adv = head->next;
		free(head);
		head = adv;
	}
}
