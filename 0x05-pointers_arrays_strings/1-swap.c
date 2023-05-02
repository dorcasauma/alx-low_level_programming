#include "main.h"
#include <stdio.h>
/**
 * swap_int - swaps the values of two integers
 * @a: a pointer to an integer
 * @b: a pointer to an integer
 *
 * This function takes two pointers to integers as parameters and swaps the
 * values of the integers they point to.
 */
void swap_int(int *a, int *b)
{
int tem = *a;
*a = *b;
*b = tem;
}