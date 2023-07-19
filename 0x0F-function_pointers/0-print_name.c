#include <stdio.h>

// Function prototype
void print_name(char *name, void (*f)(char *));

// Function to print the name directly
void print_directly(char *name) {
    printf("Name: %s\n", name);
}

// Function to print the name with some custom formatting
void print_with_formatting(char *name) {
    printf("~~~ %s ~~~\n", name);
}

int main() {
    char name[] = "John Doe";

    printf("Printing name directly:\n");
    print_name(name, print_directly);

    printf("\nPrinting name with custom formatting:\n");
    print_name(name, print_with_formatting);

    return 0;
}

// Implementation of the print_name function
void print_name(char *name, void (*f)(char *)) {
    // Call the function pointer with the name argument
    f(name);
}
