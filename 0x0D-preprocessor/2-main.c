#include <stdio.h>

int main(void)
{
printf("This program prints the name of the file it was compiled from.\n");
puts(__FILE__);
return (0);
}
