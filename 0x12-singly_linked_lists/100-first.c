#include <stdio.h>
/**
 * print_message - Prints a message before the main function is executed.
 *
 * Description: This function is marked with the constructor attribute,
 *              which means it will run automatically before the main function.
 *              It prints the specified message to the standard output.
 */

void print_message(void) __attribute__((constructor));

void print_message(void)
{
printf("You're beat! and yet, you must allow,\n"
"I bore my house upon my back!\n");
}
