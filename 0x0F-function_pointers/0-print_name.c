#include <stdio.h>
/**
 * print_directly - prints a name
 * name - name to be printed
 * Return: Always 0.
 */

void print_directly(char *name)
{
printf("Hello, my name is: %s\n", name);
}

void print_name(char *name, void (*f)(char *))
{
f(name);
}
