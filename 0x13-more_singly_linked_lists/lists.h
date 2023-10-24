#ifndef LISTS_H
#define LISTS_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * 
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
 /**
 * print_list - Prints all the elements of a list_t list.
 * @h: A pointer to the head of the list.
 *
 * Return: The number of nodes.
 */
size_t print_listint(const listint_t *h);
/**
 * print_list - returns the number of elements a linked .
 * @h: A pointer to the head of the list.
 *
 * Return: The number of nodes.
 */
size_t listint_len(const listint_t *h);
/**
 * print_list - adds a new node at the beginning of a list .
 * @h: A pointer to the head of the list.
 *
 * Return: The number of nodes.
 */
listint_t *add_nodeint(listint_t **head, const int n);
/**
 * print_list - adds a new node at the and of a list .
 * @h: A pointer to the head of the list.
 *
 * Return: The number of nodes.
 */
listint_t *add_nodeint_end(listint_t **head, const int n);
/**
 * free_list - free the list .
 * @h: A pointer to the head of the list.
 *
 * Return: free current.
 */
void free_listint(listint_t *head);
/**
 * free_list - free the list and stes the head to NULL .
 * @h: A pointer to the head of the list.
 *
 * Return: free current.
 */
void free_listint2(listint_t **head);
/**
 * print_list - deletes the head of list .
 * @h: A pointer to the head of the list.
 *
 * Return: the head node's data(n).
 */
int pop_listint(listint_t **head);
/**
 * print_list - returns the nth node of a list .
 * @h: A pointer to the head of the list.
 *
 * Return: the nth node of list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
/**
 * print_list - returns the sum of all the data (n) of a list .
 * @h: A pointer to the head of the list.
 *
 * Return: the sum of data(n).
 */
int sum_listint(listint_t *head);
/**
 * print_list - inserts a new node at a given position .
 * @h: A pointer to the head of the list.
 *
 * Return: the sum of data(n).
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
/**
 * print_list - deletes the node at index of a list .
 * @h: A pointer to the head of the list.
 *
 * Return: 1 if succeeded -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index);
/**
 * print_list - reverses a list  .
 * @h: A pointer to the head of the list.
 *
 * Return: a pointer to the first node of the revesed list.
 */
listint_t *reverse_listint(listint_t **head);
/**
 * print_list - prints a list .
 * @h: A pointer to the head of the list.
 *
 * Return: the number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head);
/**
 * print_list - frees a list  .
 * @h: A pointer to the head of the list.
 *
 * Return: the size of the list that was free'd.
 */
size_t free_listint_safe(listint_t **h);
/**
 * print_list - finds the loop in a liked list  .
 * @h: A pointer to the head of the list.
 *
 * Return: the addres of the node where the loop starts, or NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head);

#endif
