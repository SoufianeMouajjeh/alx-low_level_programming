#include<stdio.h>
#include"main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
size_t print_list(const list_t *h) {
    size_t node_count = 0;

    while (h != NULL) {
        if (h->str == NULL) {
            printf("[0] (nil)\n");
        } else {
            printf("[%lu] %s\n", h->len, h->str);
        }

        h = h->next;
        node_count++;
    }

    return node_count;
}