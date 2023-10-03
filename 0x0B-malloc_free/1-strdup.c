#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string to copy.
 *
 * Return: pointer of array of chars -copy of str-
 */
char *_strdup(char *str)
{
	char *s;
	int i, j;

	if (str == NULL)
		return (NULL);
	for (j = 0; str[j] != '\0'; j++)
	 	;
	s = (char*)malloc(sizeof(char) * (j + 1));
        if (s == NULL){
	     return (NULL);
	}
        for (i = 0; i < j; i++)
		 s[i] = str[i];
	s[j] ='\0';
	return(s);
}	     
