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
/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: A pointer to the unsigned long integer.
 * @index: The index of the bit to be set to 1 (starting from 0).
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index);
/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: A pointer to the unsigned long integer.
 * @index: The index of the bit to be cleared (starting from 0).
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index);
/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void);
/**
 * flip_bits - Counts the number of bits to flip from one number to another.
 * @n: The first unsigned long integer.
 * @m: The second unsigned long integer.
 *
 * Return: The number of bits needed to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m);
#endif