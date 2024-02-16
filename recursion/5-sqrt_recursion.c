#include "main.h"
#include <stdlib.h>

/**
 * _sqrt_recursion - returns the square root of an int
 * @n: integer to be square rooted
 * Return: -1
 */

int helper(int square_root, int n)
{
	  if (square_root * square_root == n)
  	{
  	  return (square_root);
  	}
  	if (square_root == n/2)
  	{
    	return (-1);
  	}
  	else
  	helper(square_root++, n);
}

int _sqrt_recursion(int n)
{
	int square_root = 0;

  	if (n < 0)
  	{
    	return (-1);
  	}
  	if (n == 1)
  	{
    	return (1);
  	}
  
 	 else
  	{
    	return(helper(square_root, n));
  	}
  
}
