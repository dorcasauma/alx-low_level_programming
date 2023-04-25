#include <stdio.h>
/**
 *print_alphabet - Prints the lowercase alphabet followed by a new line.
 * main - check the code
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
char c = 'a';

while (c <= 'z')
{
putchar(c);
c++;
}
putchar('\n');

}
