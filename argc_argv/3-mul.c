#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: counts the arguments.
 * @argv: string array for the arguments entered
 *
 * Return: 0 (Sucess) else 1 (Failure).
 */
int main(int argc, char *argv[])
{
int n1 = 0;
int n2 = 0;
if (argc != 3)
{
printf("Error\n");
return (1);
}
else
{
n1 = atoi(argv[1]);
n2 = atoi(argv[2]);
printf("%d\n", n1 *n2);
}
return (0);
}
