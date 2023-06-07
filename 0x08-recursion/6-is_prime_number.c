#include "main.h"
/**
  * _prime_numbers - function to count from 1 to n
  * @i: an integer parameter for n
  * @j: an integer parameter for iteration.
  * Return: return a primes from 1 to n
  */
int _prime_numbers(int i, int j)
{
	if (i == j)
	{
		return (1);
	}
	else if (i % j == 0)
	{
		return (0);
	}
	return (_prime_numbers(i, j + 1));
}
/**
  *is_prime_number - a function that check if the number is primer number.
  *@n: an integer parameter.
  *Return: return 1 for n is primer number and 0 for not.
  */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (_prime_numbers(n, 2));
}
