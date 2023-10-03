#include "main.h"
/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Always 0.
 */
char *creat_array(unsigned int size, char c);
{
	unsigned int i;
	char *arr = (char *)malloc(size * sizeof(char));

	if (size == 0)
		return NULL;
	if (arr == 0)
		return NULL;
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
