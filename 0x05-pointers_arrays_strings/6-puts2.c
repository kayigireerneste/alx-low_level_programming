#include <main.h>
/**
  * puts2 - a function that prints every other character of a string,
  * starting with the first character, followed by a new line
  * @str: input string
  * Return: print
  */
void puts2(char *str)
{
	int length = 0;
	int t = 0;

	while (*str != '0')
	{
		length++;
		str++;
	}
	t = length - 1;
	for (int i = 0; i <= t; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
