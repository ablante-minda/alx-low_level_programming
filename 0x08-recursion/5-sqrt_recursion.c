#include "main.h"
/**
 * helperfunction - checks if sqrt of number exists
 * @num: number.
 * @psqrt: poissible sqrt of number.
 *
 * Return: sqrt of number of -1 for error.
 */
int helperFunction(int num, int psqrt)
{
	if ((psqrt * psqrt) == num)
	{
		return (psqrt);
	}
	else

	{
		if ((psqrt * psqrt) > num)
			return (-1);
		else

			return (helperFunction(num, psqrt + 1));
	}
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number to find sqrt of.
 *
 * Return: squareroot of n.
 * -1 if n does not have a naturale sqrt.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (helperFunction(n, 0));
}
