#include "main.h"
#include <stdio.h>
/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @i: iterator
 *
 * Return: the resulting square root
 */
int main(void)
{
int r;
r = _sqrt_recursion(1);
printf("%d\n", r);
r = _sqrt_recursion(1024);
printf("%d\n", r);
r = _sqrt_recursion(16);
printf("%d\n", r);
r = _sqrt_recursion(17);
printf("%d\n", r);
r = _sqrt_recursion(25);
printf("%d\n", r);
r = _sqrt_recursion(-1);
printf("%d\n", r);
return (0);
}
