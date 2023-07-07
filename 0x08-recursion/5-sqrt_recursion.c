#include "main.h"
/**
  *_sqrt_recursion - A function that calculates the natural
  * square root of a number.
  *
  *@n: Number to look for the natual square root
  *
  *Return: returns the natural square root or -1
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt(n, 0));
	/**
	  *_sqrt - A helper recursive square root function
	  *
	  *@n Integer number to look for natural squares 
	  *@i: An iterator
	  *
	  *@Return: returns sqrt function
	  */
	int _sqrt(int n, int i)
	{
		int square = i * i;

		if (square > n)
		{	
			return (-1);
		}
		if (square == n)
		{
			return (i);
		}
		return (_sqrt(n, 1 + 1));
	}
}
