#include "main.h"
#include <math.h>
#include <stdio.h>
/*
 * _sqrt_recursion - a function that returns the natural square root of a number
 * @n - variable used in the function
 * Return : (-1) when theres no sqrt
 */
 int _sqrt_recursion(int n)
{
	double squareRoot;

	if(n <= 0)
	{
		return (-1);
	}
	else if (n < 0)
	{
		squareRoot = sqrt((double)n);
		n--;
		return _sqrt_recursion(n);
	}
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _sqrt_recursion(1);
    printf("%d\n", r);
    r = _sqrt_recursion(1024);
    printf("%d\n", r);
    r = _sqrt_recursion(16);
    printf("%d\n", r);
    r = _sqrt_recursion(17);
    printf("%d\n", r);
    r = _sqrt_recursion(25);
    printf("%d\n", r);
    r = _sqrt_recursion(-1);
    printf("%d\n", r);
    return (0);
}
