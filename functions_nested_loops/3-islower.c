#include "main.h"
/**
 * _islower - Entry point
 * @c: is a variable and a increment counter
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
