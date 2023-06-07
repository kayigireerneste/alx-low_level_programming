#include "main.h"
/**
  * _length_of_string - a function to return the length of string
  * @s: a character parameter to print string
  * @leng: an integer parameter to return the length of the string
  * Return: the length of the string
  */
int _length_of_string(char *s, int leng)
{
	if (*s == 0)
		return (leng - 1);
	return (_length_of_string(s + 1, leng + 1));
}
/**
  * _compare_ - a function to compare both reverse and original string
  * @s: a string parameter for string
  * @leng: an integer parameter for the length of the string.
  * Return: return 1 for successfull compiration
  */
int _compare_(char *s, int leng)
{
	if (*s != *(s + leng))
	{
		return (0);
	}
	else if (*s == 0)
	{
		return (1);
	}
	else
	{
		return (_compare_(s + 1, leng - 2));
	}
}
/**
  * is_palindrome - a function that returns 1 if a string is a palindrome and 0
  * @s: a pointer to the string parameter.
  * Return: return 1 if string is palindrome and 0 if not.
  */
int is_palindrome(char *s)
{
	int i;

	i = _length_of_string(s, 0);
	return (_compare_(s, i));
}
