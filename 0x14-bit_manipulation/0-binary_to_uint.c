#include<stdio.h>
#include"main.h"

/**
 * binary_to_uint - Converts a binary string to an unsigned int.
 * @b: A pointer to the binary string (0 and 1 characters).
 * Return: The converted unsigned int, or 0 if an invalid character is found.
 */

unsigned int binary_to_int(const char *b)
{
    unsigned int result = 0;
    int i = 0;

    if (b == NULL)
        return (0);

    while (b[i] != '\0')
    {
        if (b[i] == '0')
        {
            result = (result << 1);
        }
        else if (b[i] == '1')
        {
            result = (result << 1) | 1;
        }
        else
        {
            return (0);
        }
        i++;
    }
    return (result);
}
