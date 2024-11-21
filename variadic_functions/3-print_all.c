#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - print anything passed if char, int, float, or string.
 * _printchar - print char type element from va_list
 * @list: va_list passed to function
 * @format: string of formats to use and print
 */
void print_all(const char * const format, ...)
{
va_list args;
int i = 0;
char *str;
char c;
int n;
float f;
va_start(args, format);
while (format && format[i])
{
if (format[i] == 'c')
{
c = va_arg(args, int);
printf("%c", c);
}
else if (format[i] == 'i')
{
n = va_arg(args, int);
printf("%d", n);
}
else if (format[i] == 'f')
{
f = va_arg(args, double);
printf("%f", f);
}
else if (format[i] == 's')
{
str = va_arg(args, char *);
if (str)
printf("%s", str);
else
printf("(nil)");
}
i++;
if (format[i] != '\0')
printf(", ");
}
va_end(args);
printf("\n");
}
/**
 * main - This defines the entry point of a C program. The function returns
 * an integer (int) and doesn't take any parameters (void).
 * void: don't retour value
 */
int main(void)
{
print_all("ceis", 'H', 123, 3.14, "Hello");
print_all("cfsi", 'A', 456, 2.71, NULL);
return (0);
}
