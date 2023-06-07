#include "main.h"
/**
  * _strlen_recursion - a function that returns the length of a string.
  * @s: string character.
  * Return: the length of the string
  */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		return (1 + _strlen_recursion(s));
	}
	else
	{
		return (0);
	}
}
