#include <main.h>
/**
  * print_rev - a function that prints a string, in reverse,
  * followed by a new line
  * @s : input string
  * return: reversed @s string
  */
void print_rev(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;
	for (int i = length; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
