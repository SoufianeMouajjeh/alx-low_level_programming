#include "main.h"
/**
 * create_array - Create an array of characters
 * and initialize with a specific char.
 * @size: The size of the array.
 * @c: The character to initialize the array with.
 *
 * Return: If memory allocation fails or size is 0, return NULL.
 * Otherwise, return a pointer to the created array.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr = (char *)malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
