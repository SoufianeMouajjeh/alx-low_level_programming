#include"lists.h"
/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: Pointer to the head of the list
 * @n: Value of the new node
 * Return: Pointer to the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *Node, *adv;

	Node = malloc(sizeof(dlistint_t));
	if (Node == NULL)
		return (NULL);
	Node->n = n;
	Node->next = NULL;
	if (*head == NULL)
	{
		Node->prev = NULL;
		*head = Node;
		return (Node);
	}
	adv = *head;
	while (adv->next)
		adv = adv->next;
	adv->next = Node;
	Node->prev = adv;
	return (Node);
}
