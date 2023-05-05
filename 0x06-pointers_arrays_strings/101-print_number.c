/*
 * print_number - print an integer to stdout
 * @n: the integer to print
 *
 * This function prints the integer @n to stdout using only the _putchar function.
 */
void print_number(int n)
{

int digit, divisor;

/* Handle negative numbers */
if (n < 0) {
_putchar('-');
n = -n;
}

/* Determine the divisor to get the leftmost digit of @n */
for (divisor = 1; divisor <= n / 10; divisor *= 10)
{
/* Do nothing */
}

/* Print each digit in @n */
while (divisor > 0)
{
digit = n / divisor;
_putchar('0' + digit);
n -= digit * divisor;
divisor /= 10;
}

/* Print a newline character */
_putchar('\n');
}
