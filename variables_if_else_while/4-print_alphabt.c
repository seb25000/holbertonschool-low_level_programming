#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return: A:lways 0 (Success)
 */
int main(void)
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
if (alphabet != 'q' && alphabet != 'e')
putchar(alphabet);
putchar('\n');
return (0);
}
