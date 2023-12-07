#include"lists.h"
/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: Pointer to the head of the list
 * @n: Value of the new node
 * Return: Pointer to the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *Node;

	Node = malloc(sizeof(dlistint_t));
	if (Node == NULL)
		return (NULL);
	Node->n = n;
	Node->prev = NULL;
	Node->next = *head;
	if (*head)
		(*head)->prev = Node;
	*head = Node;
	return (Node);
}
