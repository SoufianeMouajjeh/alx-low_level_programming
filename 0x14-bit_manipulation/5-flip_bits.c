#include <stdio.h>
#include "main.h"
/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: A pointer to the unsigned long integer.
 * @index: The index of the bit to be cleared (starting from 0).
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
    unsigned long int xor_result = n ^ m;
    unsigned int count = 0;

    while (xor_result)
    {
        count += xor_result & 1;
        xor_result >>= 1;
    }
    return count;
}

