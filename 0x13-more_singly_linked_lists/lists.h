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

#endif
