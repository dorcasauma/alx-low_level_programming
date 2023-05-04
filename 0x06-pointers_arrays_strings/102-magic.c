#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a[5] = {1, 2, 4, 8, 16};
int *p;

p = &a[2];
*p = 98;
printf("a[2] = %d\n", *p); // prints "a[2] = 98"
return (0);
}
