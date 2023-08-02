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
int cents;
int num_coins = 0;
if (argc != 2) {
printf("Error\n");
return (1);
}
cents = atoi(argv[1]);
if (cents < 0) {
printf("0\n");
return (0);
}
while (cents >= 25)
{
cents -= 25;
num_coins++;
}
while (cents >= 10)
{
cents -= 10;
num_coins++;
}
while (cents >= 5)
{
cents -= 5;
num_coins++;
}
while (cents >= 2)
{
cents -= 2;
num_coins++;
}
while (cents >= 1) {
cents -= 1;
num_coins++;
}
printf("%d\n", num_coins);
return (0);
}
