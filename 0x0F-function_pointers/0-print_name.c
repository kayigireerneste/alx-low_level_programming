#include "function_pointers.h"
/**
  * print_name - a function that prints a name.
  * @name: a string parameter for the name.
  * @f: a function pointer to on the string
  * Return: return nothing as it is void function.
  */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	else
	{
		(*f)(name);
	}
}
