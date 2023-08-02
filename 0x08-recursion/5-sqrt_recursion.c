#include <stdio.h>

/**
 * _sqrt_helper - Helper function to find the square root recursively.
 * @n: The number for which to find the square root.
 * @start: The starting value to check for the square root.
 * @end: The ending value to check for the square root.
 * Return: The natural square root of n, or -1 if it doesn't have a natural square root.
 */
int _sqrt_helper(int n, int start, int end)
{
int mid = (start + end) / 2;
int square = mid * mid;
if (start > end)
return (-1);
if (square == n)
return (mid);
if (square < n)
return (_sqrt_helper(n, mid + 1, end));
return (_sqrt_helper(n, start, mid - 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number for which to find the square root.
 * Return: The natural square root of n, or -1 if it doesn't have a natural square root.
 */
int _sqrt_recursion(int n)
{
int start = 0;
int end = n;
if (n < 0)
return -1;
return (_sqrt_helper(n, start, end));
}
