#include <stdio.h>

/**
 * print_sign - prints the sign of a number.
 *
 * @n: the number to check
 *
 * Return: 1 if n is greater than zero, 0 if n is zero, -1 if n is less than zero.
 */
int print_sign(int n){

    int r;

    r = print_sign(n);
    printf("%d\n", r);
    r = print_sign(0);
    printf("%d\n", r);
    r = print_sign(0xff);
    printf("%d\n", r);
    r = print_sign(-1);
    printf("%d\n", r);

    return (0);
}
