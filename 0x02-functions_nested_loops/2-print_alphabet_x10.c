#include <stdio.h>
/**
 *print_alphabet 10 times - Prints the lowercase alphabet 10 times.
 * main - check the code
 *
 * Return: Always 0.
 */
void print_alphabet(void)
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
count++;
}
}

