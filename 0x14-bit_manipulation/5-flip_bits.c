#include <stdio.h>
#include "main.h"
/**
 * Flips the bits of an integer value..
 * value (int): The integer value whose bits will be flipped..
 * @index: The index of the bit to be cleared (starting from 0).
 *
 * int: The integer with its bits flipped..
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
	return (count);
}

