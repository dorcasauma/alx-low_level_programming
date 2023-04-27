#include <stdio.h>
#include <ctype.h>

/**
 * Checks if a character is a digit (0-9)
 * @param c The character to check
 * @return Non-zero value if the character is a digit, 0 otherwise
 */

void print_line(int n) {
    if (n <= 0) {
        // If n is 0 or less, only print a newline
        putchar('\n');
    } else {
        // Otherwise, print n underscores followed by a newline
        for (int i = 0; i < n; i++) {
            putchar('_');
        }
        putchar('\n');
    }
}

