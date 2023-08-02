#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// Function to check if a string is a positive integer
int is_positive_integer(const char *str) {
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        if (!isdigit(str[i])) {
            return 0;
        }
    }
    return 1;
}

// Function to multiply two positive integers
unsigned long int multiply_positive_integers(unsigned long int num1, unsigned long int num2) {
    return num1 * num2;
}

int main(int argc, char *argv[]) {
    char *endptr;
    unsigned long int num1, num2, result; // Declare all variables at the beginning

    // Check if the number of arguments is correct
    if (argc != 3) {
        fprintf(stderr, "Error\n");
        return 98;
    }

    // Parse the command-line arguments and check if they are valid positive integers
    num1 = strtoul(argv[1], &endptr, 10);
    if (*endptr != '\0' || !is_positive_integer(argv[1])) {
        fprintf(stderr, "Error\n");
        return 98;
    }

    num2 = strtoul(argv[2], &endptr, 10);
    if (*endptr != '\0' || !is_positive_integer(argv[2])) {
        fprintf(stderr, "Error\n");
        return 98;
    }

    // Perform the multiplication and store the result
    result = multiply_positive_integers(num1, num2);

    // Print the result
    printf("%lu\n", result);

    return 0;
}
