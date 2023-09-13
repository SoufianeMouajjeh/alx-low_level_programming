#include "main.h"
/**
 * print_alphabet - void function
 * print lowercase alphabet
 * Return: nothing (Success).
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
