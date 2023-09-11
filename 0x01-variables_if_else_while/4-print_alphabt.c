#include <stdio.h>
#include <ctype.h>
/**
 * main - main file
 * print alphabt
 * Return: 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		int lower_ch = tolower(ch);

		if (lower_ch != 'q' && lower_ch != 'e')
		{
			putchar(lower_ch);
		}
	}
	putchar('\n');
	return (0);
}
