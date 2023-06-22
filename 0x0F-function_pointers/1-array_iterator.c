#include "function_pointers.h"
/**
  * array_iterator -a function that executes a function given as a
  * -- parameter on each element of an array.
  * @array: an array parameter.
  * @size: size of an array parameter.
  * @action: a function pointer parameter.
  * Return: return nothing as it is void function.
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	while (array == '\0' && size == '\0' && action = '\0')
	{
		for (i = 0; i < size; i++)
		{
			action(*(array + i));
		}
	}
}
