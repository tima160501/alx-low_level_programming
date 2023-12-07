#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - print each elem of an array
 * @array: input array
 * @size: numb of ele to print
 * @action: pointer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

