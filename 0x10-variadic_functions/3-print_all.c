#include <stdarg.h>
void print_all(const char * const format, ...)
{
char c;
int i;
float f;
char *s;
const char *fmt_ptr = format;
va_list args;
va_start(args, format);
while (*fmt_ptr)
{
switch (*fmt_ptr)
{
case 'c':
c = (char)va_arg(args, int);
printf("%c", c);
break;
case 'i':
i = va_arg(args, int);
printf("%d", i);
break;
case 'f':
f = (float)va_arg(args, double);
printf("%f", f);
break;
case 's':
s = va_arg(args, char*);
if (s == NULL)
{
printf("(nil)");
}
else
{
printf("%s", s);
}
break;
}
if (*(fmt_ptr + 1))
printf(", ");
fmt_ptr++;
}
va_end(args);
printf("\n");
}
