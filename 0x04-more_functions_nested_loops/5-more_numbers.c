#include <stdio.h>

/**
 *prints 10 times the numbers, from 0 to 14, followed by a new line.
 * @return zero value
 */

void more_numbers(void)
{
int k = 0;
while (k <10)
{
int c;
for (c = 0; c <= 14; c++) {
putchar(c + '0');
}
putchar('\n');
k += 1;
}
}