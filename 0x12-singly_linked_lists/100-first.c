#include <stdio.h>
#include"lists.h"

/**
 * pre_main_message - Prints a pre-main message.
 */
void printTextBeforeMain()  
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
    printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}

int main()
{
	printTextBeforeMain();
	printf("Main function has been executed.\n");
	return (0);
    printTextBeforMain();
    printf("Main function has been executed.\n");
    return (0);
}
