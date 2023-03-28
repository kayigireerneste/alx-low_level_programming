#include "main.h"
/**
 * _strcpy - a function that copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: pointer to the buffer
 * @src: string pointer
 * Return: the value test
 */
char *_strcpy(char *dest, char *src)
{
	int x = 0;
	int i = 0;

	while (*(src + x) != '\0')
	{
		x++;
	}
	for (i; i < x; i++)
	{
		dest[i] = src[i];
	}
	dest[x] = '\0';
	return (dest);
}
