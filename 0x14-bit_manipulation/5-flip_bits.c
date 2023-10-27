#include <stdio.h>
#include "main.h"
/**
<<<<<<< HEAD
 * Flips the bits of an integer value..
 * value (int): The integer value whose bits will be flipped..
 * @index: The index of the bit to be cleared (starting from 0).
 *
 * int: The integer with its bits flipped..
=======
 * flip_bits - Count the number of bits to flip to get from n to m.
 * @n: The first number.
 * @m: The second number.
 * 
 * Return: The number of bits to flip.
>>>>>>> 2cd7db54cb3c5678b132697a325599a9f3ac88a1
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

