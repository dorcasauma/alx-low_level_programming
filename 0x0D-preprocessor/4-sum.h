#include <stdio.h>

#define SUM(x, y) ((x) + (y))

int main() {
    int num1 = 5;
    int num2 = 3;
    printf("Sum of %d and %d is %d\n", num1, num2, SUM(num1, num2));
    return 0;
}
