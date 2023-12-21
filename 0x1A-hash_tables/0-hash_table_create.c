#include "hash_tables.h"

/**
 * hash_table_create - Creates a new hash table
 * @size: Size of the hash table array
 *
 * Return: Pointer to the newly created hash table or NULL on failure
 */

hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *new_table = (hash_table_t *)malloc(sizeof(hash_table_t));
    if (new_table == NULL)
        return NULL;

    new_table->size = size;
    
    new_table->array = (HashNode **)malloc(size * sizeof(HashNode *));
    if (new_table->array == NULL)
    {
        free(new_table);
        return NULL;
    }

    for (unsigned long int i = 0; i < size; i++)
        new_table->array[i] = NULL;

    return new_table;
}