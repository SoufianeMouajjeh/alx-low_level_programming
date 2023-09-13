#include "main.h"
/**
 * _islower - int function
 * @c: an int argument
 * Description: checking if lowercase
 * lowercase checker
 * Return: 1 if the argument is lowercase or 0 if not
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
