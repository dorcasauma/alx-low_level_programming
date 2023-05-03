
/**
 * print_rev - Prints a string in reverse followed by a new line.
 * @s: Pointer to the string to be printed in reverse.
 *
 * Return: void.
 */
void print_rev(char *s)
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
