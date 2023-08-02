#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int is_positive_integer(const char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (!isdigit(str[i]))
{
return (0);
}
}
return (1);
}
unsigned long int multiply_positive_integers(unsigned long int num1, unsigned long int num2)
{
return (num1 * num2);
}
int main(int argc, char *argv[])
{
char *endptr;
unsigned long int num1, num2, result;
if (argc != 3)
{
fprintf(stderr, "Error\n");
return (98);
}
num1 = strtoul(argv[1], &endptr, 10);
if (*endptr != '\0' || !is_positive_integer(argv[1]))
{
fprintf(stderr, "Error\n");
return 98;
}
num2 = strtoul(argv[2], &endptr, 10);
if (*endptr != '\0' || !is_positive_integer(argv[2]))
{
fprintf(stderr, "Error\n");
return (98);
}
result = multiply_positive_integers(num1, num2);
printf("%lu\n", result);
return (0);
}

