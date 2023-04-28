#include <stdio.h>

/**
 * draws a straight line in the terminal.
 *
 * @return zero value
 */

void print_line(int n) {
    if (n <= 0) {
        putchar('\n');
        return;
    }
    int i;
    for (i = 0; i < n; i++) {
        putchar('_');
    }
    putchar('\n');
}
