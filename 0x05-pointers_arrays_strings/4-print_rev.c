
/**
 * print_rev - Prints a string in reverse followed by a new line.
 * @s: Pointer to the string to be printed in reverse.
 *
 * Return: void.
 */
void print_rev(char *s)
{
int len = 0;
while (*s != '\0')
{
len++;
s++;
}
s--;
while (len > 0){
putchar(*s);
s--;
len--;
}
putchar('\n');
}
