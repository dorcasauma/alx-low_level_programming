#include <stdio.h>

#define ABS(x) ((x) < 0 ? -(x) : (x))

int main()
{
int num = -5;
printf("Absolute value of %d is %d\n", num, ABS(num));
return (0);
}
