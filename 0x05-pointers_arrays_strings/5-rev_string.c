#include <stdio.h>
/**
 * print_rev - reverses a string
 * @s: is the string to be reversed
 *
 *
 *reverses a string
 *
 */

void rev_string(char *s)
{
char *start = s;
char *end = s;
char tmp;
while (*end != '\0')

end++;

end--;
while (start < end)
{
tmp = *start;
*start = *end;
*end = tmp;
start++;
end--;
}
}

