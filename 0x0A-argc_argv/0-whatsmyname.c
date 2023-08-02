/**
 * main -  The main function is the entry point of the program.
 *        It prints the name of the program (argv[0]) to the console.
 *
 * @argc: The number of command-line arguments, including the program name.
 * @ argv: An array of strings representing the command-line arguments.
 *
 * Return: The function returns 0 to indicate successful program execution.
 */
#include <stdio.h>

int main(int argc, char *argv[])
{
(void)argc;
printf("%s\n", argv[0]);
return (0);
}
