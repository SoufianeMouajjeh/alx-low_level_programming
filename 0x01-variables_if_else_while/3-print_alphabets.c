#include <stdio.h>
#include <ctype.h>
/**
 * main - main file
 * alphABET
 * Return: 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		int lowerchar = tolower(ch);

		putchar(lowerchar);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
