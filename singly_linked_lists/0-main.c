#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
list_t *head;
list_t *new;
list_t hello = {5, "World", 5, NULL};
printf("[%d] %s\n", hello.len, hello.str);
return (0);
head = &hello;
new = malloc(sizeof(list_t));
if (new == NULL)
{
printf("Error\n");
return (1);
}
new->str = strdup("Hello");
new->len = 5;
new->next = head;
head = new;
printf("-> elements\n");
printf("\n");
free(new->str);
new->str = NULL;
printf("-> elements\n");
free(new);
return (0);
}
