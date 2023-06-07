#include "main.h"
/**
  * sqroot - a function to return the natural sqrt of number.
  * @x: an interger parameter for number.
  * @i: an integer parameter for iteration.
  * Return: return the root of a number
  */
int sqroot(int x, int i)
{
	int number = i * i;

	if (number > x)
	{
		return (-1);
	}
	else if (number == x)
	{
		return (i);
	}
	else
	{
		return (sqroot(x, i + 1));
	}
}
/**
  * _sqrt_recursion - a function to return the squareroot of a number.
  * @n: an integer parameter to be returned as sqrt.
  * Return: return the sqrt of a number.
  */
int _sqrt_recursion(int n)
{
	return (sqroot(n, 1));
}
