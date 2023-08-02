#include <stdio.h>
#include <stdlib.h>
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
int num1, num2, result;
if (argc != 3)
{
printf("Error: Usage: %s <num1> <num2>\n", argv[0]);
return (1);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
result = num1 * num2;
printf("%d\n", result);
return (0);
}
