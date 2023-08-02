#include <stdio.h>
/**
 * main - The main function is the entry point of the program.
 *        It prints the number of command-line arguments (excluding the program name) to the console.
 *
 * @argc: The number of command-line arguments, including the program name.
 * @argv: An array of strings representing the command-line arguments.
 *
 * Return: The function returns 0 to indicate successful program execution.
 */
int main(int argc, char *argv[])
{
(void)argv;
printf("%d\n", argc - 1);
return (0);
}
