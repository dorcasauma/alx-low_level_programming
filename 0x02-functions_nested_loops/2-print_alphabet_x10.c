#include "main.h"
/**
 *print_alphabet - Prints the lowercase alphabet followed by a new line.
 * main - check the code
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
    char c;
    int i;

    for (i = 0; i < 10; i++)
    {
        for (c = 'a'; c <= 'z'; c++)
        {
            putchar(c);
        }
        putchar('\n');
    }
}
