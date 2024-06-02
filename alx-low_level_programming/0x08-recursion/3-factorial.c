#include "main.h"
/**
 * factorial - determines the factorial of a number
 * @n: factorial number
 *
 * Return: -1 if n < 0 otherwise the factorial of the number
 */
int factorial(int n)
{
	int facto;
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	facto = n * factorial(n - 1);
	return (facto);
}
