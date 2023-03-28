#include <main.h>
/**
  * rev_string - a function that reverses a string.
  * @s: input string
  * Return: reversed @s string
  */
void rev_string(char *s)
{
	int counter = 0;

	while (s[counter] != '\0')
		counter++;
	for (int i = 0; i < counter; i++)
	{
		counter--;
		char temp = s[i];

		s[i] = s[counter];
		s[counter] = temp;
	}
}
