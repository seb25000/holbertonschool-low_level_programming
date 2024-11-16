#include <stdio.h>
#include "dog.h"
/**
 * main - check the code
 * new_dog: function: This function allocates memory for a new dog_t object, 
 *          copies the strings for the dog's name and owner, 
 *          and initializes the dog's age.
 *
 * Return: Always 0.
 */
int main(void)
{
dog_t *my_dog;
my_dog = new_dog("Poppy", 3.5, "Bob");
printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
return (0);
}
