#include <stdio.h>

/**
 * sum_even_fibonacci - Calculates the sum of even-valued terms in the
 * Fibonacci sequence up to a limit
 *
 * @param limit: The maximum value of Fibonacci
 * terms to include in the sum
 * Return The sum of even-valued terms in the
 * Fibonacci sequence up to limit
 */
int sum_even_fibonacci(int limit)
{
int sum = 0;
int a = 1, b = 2;

while (b <= limit)
{
if (b % 2 == 0)
{
sum += b;
}
int c;
c = a + b;
a = b;
b = c;
}

return (sum);
}

int main()
{
int limit = 4000000;
int sum = sum_even_fibonacci(limit);

printf("%d\n", sum);

return (0);
}

