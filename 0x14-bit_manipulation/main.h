#ifndef MAIN_H
#define MAIN_H

#include<stdlib.h>
#include<stdio.h>

/**
 * binary_to_uint - Converts a binary string to an unsigned int.
 * @b: A pointer to the binary string (0 and 1 characters).
 *
 * Return: The converted unsigned int, or 0 if an invalid character is found.
 */
unsigned int binary_to_uint(const char *b);
/**
 * print_binary - Prints the binary representation of a number.
 * @n: The unsigned long int to be converted and printed.
 */
void print_binary(unsigned long int n);
/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The unsigned long integer.
 * @index: The index of the bit to retrieve (starting from 0).
 *
 * Return: The value of the bit at index index or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index);

#endif