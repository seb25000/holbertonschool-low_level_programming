#include "function_pointers.h"
/**
 * array_iterator - a function that excute a function given
 *                  as a parameter on each element of an array
 * @action: is a function that return the value of another function
 * @array: array of integers
 * @size: size of array
 * Return: index of first element that matches with `cmp`, or -1 if none found
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
for (i = 0; i < size; i++)
action(array[i]);
}
