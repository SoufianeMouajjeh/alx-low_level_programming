#include"lists.h"
/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Pointer to the head of the list
 * @idx: Index of the list where the new node should be added.
 * @n: Value to store in the new node.
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *head = *h, *Node = NULL;

	if (head == NULL && idx != 0)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	while (head)
	{
		if (i == idx - 1)
		{
			if (head->next == NULL)
				return (add_dnodeint_end(h, n));
			Node = malloc(sizeof(dlistint_t));
			if (Node == NULL)
				return (NULL);
			Node->n = n;
			Node->prev = head;
			Node->next = head->next;
			head->next->prev = Node;
			head->next = Node;
			return (Node);
		}
		head = head->next;
		i++;
	}
	return (NULL);
}
