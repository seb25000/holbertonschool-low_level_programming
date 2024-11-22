#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - print anything passed if char, int, float, or string
 * _printchar - print char type element from va_list
 * @list: va_list passed to function
 * @format: string of formats to use and print
 */
void print_all(const char * const format, ...)
{
va_list args;
int i = 0;
char c;
int num;
float f;
char *s;
va_start(args, format);
while (format && format[i])
{
if (i > 0)
printf(", ");
switch (format[i])
{
case 'c':
c = va_arg(args, int);
printf("%c", c);
break;
case 'i':
num = va_arg(args, int);
printf("%d", num);
break;
case 'f':
f = va_arg(args, double);
printf("%f", f);
break;
case 's':
s = va_arg(args, char *);
if (s)
printf("%s", s);
else
printf("(nil)");
break;
default:
break;
}
i++;
}
va_end(args);
printf("\n");
}
