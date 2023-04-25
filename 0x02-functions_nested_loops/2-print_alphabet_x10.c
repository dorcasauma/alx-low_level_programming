#include <stdio.h>
/**
 *print_alphabet_x10 - Prints the lowercase alphabet 10 times.
 * main - check the code
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
char letter = 'a';
int count = 0;
while (count < 10)
{
while (letter <= 'z')
{
putchar(letter);
letter++;
}
letter = 'a';
putchar('\n');
count++;
}
}
