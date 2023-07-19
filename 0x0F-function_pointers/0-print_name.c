#include <stdio.h>

void print_directly(char *name)
{
    printf("Hello, my name is: %s\n", name);
}

void print_name(char *name, void (*f)(char *))
{
    f(name);
}
