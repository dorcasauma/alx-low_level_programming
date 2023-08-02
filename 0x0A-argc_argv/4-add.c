#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
/**
 * main - The main function is the entry point of the program.
 * It prints the number of command-line arguments
 * (excluding the program name) to the console.
 *
 * @argc: The number of command-line arguments, including the program name.
 * @argv: An array of strings representing the command-line arguments.
 *
 * Return: The function returns 0 to indicate successful program execution.
 */
int main(int argc, char *argv[])
{
int sum = 0;
int i, j;
if (argc == 1)
{
printf("0\n");
return 0;
}
for (i = 1; i < argc; i++)
{
char *arg = argv[i];
for (j = 0; arg[j] != '\0'; j++)
{
if (!isdigit(arg[j]))
{
printf("Error\n");
return (1);
}
}
sum += atoi(arg);
}
printf("%d\n", sum);
return (0);
}
