#include"lists.h"
/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head: Pointer to the head of the list
 * @index: Index of the node to return
 * Return: Pointer to the node at index or NULL if it doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n;
	dlistint_t *newNode;

	if (head == NULL)
		return (NULL);
	newNode = head;
	for (n = 0; n < index; n++)
	{
		if (newNode->next == NULL)
			return (NULL);
		newNode = newNode->next;
	}
	return (newNode);
}
