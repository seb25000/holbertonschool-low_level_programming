#include "main.h"
/**
 * *_strncpy - concatenates n bytes from a string to another
 * @dest: destination string
 * @src: source string
 * @n: number of bytes of str to concatenate
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
i = 0;
while (src[i] != '\0')
{
while (i != '\0')
dest[i] = src[i];
while (i < n)
i++;
}
dest[i] = '\0';
return (dest);
}
