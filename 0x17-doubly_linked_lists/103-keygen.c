#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - generate a key depending on a username for crackme5
 * @argc: number of arguments passed
 * @argv: arguments passed to main
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	char *s;
	unsigned int count, c;
	size_t length, add;
	char generatedKey[7] = "      ";

	s = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	if (argc != 2)
	{
		printf("Correct usage: ./keygen5 username\n");
		return (1);
	}
	length = strlen(argv[1]);
	generatedKey[0] = s[(length ^ 59) & 63];
	for (count = 0, add = 0; count < length; count++)
		add += argv[1][count];
	generatedKey[1] = s[(add ^ 79) & 63];
	for (count = 0, c = 1; count < length; count++)
		c *= argv[1][count];
	generatedKey[2] = s[(c ^ 85) & 63];
	for (c = argv[1][0], count = 0; count < length; count++)
		if ((char)c <= argv[1][count])
			c = argv[1][count];
	srand(c ^ 14);
	generatedKey[3] = s[rand() & 63];
	for (c = 0, count = 0; count < length; count++)
		c += argv[1][count] * argv[1][count];
	generatedKey[4] = s[(c ^ 239) & 63];
	for (c = 0, count = 0; (char)count < argv[1][0]; count++)
		c = rand();
	generatedKey[5] = s[(c ^ 229) & 63];
	printf("%s\n", generatedKey);
	return (0);
}
