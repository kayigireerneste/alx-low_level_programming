#include "function_pointers.h"
/**
  * int_index -  a function that searches for an integer.
  * @array: any array pointer of the function parameter.
  * @size: the number of elements in the array array.
  * @cmp: a pointer to the function to be used to compare values
  * (*int_index: returns the index of the first element at 0*)
  * Return: return -1 for no element matches and size <= 0,
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(*(array + i)))
		{
			return (i);
		}
	}
	return (-1);
}
