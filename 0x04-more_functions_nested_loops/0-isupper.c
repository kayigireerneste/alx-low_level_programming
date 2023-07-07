#include "main.h"
/**
  * _isupper - a function that checks for uppercase character.
  * @c: char parameter for an character
  * Return: return 1 for uppercase and 0 other wise
  *
  */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
