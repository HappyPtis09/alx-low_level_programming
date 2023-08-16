#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function given as a parameter on each element of an array.
 * @array: int
 * @size: fct
 * @action: function pointer
 * 
 * Return: Nothing
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
    if (size && action)
    {
        action(size);
    }
}