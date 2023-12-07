#include"lists.h"
/**
 * delete_dnodeint_at_index - Deletes the node at index index of
 * a dlistint_t linked list.
 * @head: Pointer to the head of the list
 * @index: Index of the node that should be deleted. Index starts at 0.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *adv = *head, *adv2;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		adv2 = adv->next;
		free(adv);
		if (adv2)
			adv2->prev = NULL;
		*head = adv2;
		return (1);
	}
	while (adv)
	{
		if (i == index)
		{
			adv2 = adv->next;
			adv->prev->next = adv2;
			if (adv2)
				adv2->prev = adv->prev;
			free(adv);
			return (1);
		}
		adv = adv->next;
		i++;
	}
	return (-1);
}
