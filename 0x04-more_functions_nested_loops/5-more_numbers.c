#include <stdio.h>

/**
 *prints 10 times the numbers, from 0 to 14, followed by a new line.
 * @return zero value
 */

void more_numbers(void){
int k;
while (k <11)
{
char c;
for (c = '0'; c <= '9'; c++) {
putchar(c);
}
putchar('\n');
}
return (0);
}