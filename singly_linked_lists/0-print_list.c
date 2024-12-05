#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * print_list - prints all the elements of a list
 * @h: is a pointer
 * @h:pointer to the list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
while (h != NULL)
{
printf("[%d] %s\n", h->len, h->str);
h = h->next;
}
return (0);
}
