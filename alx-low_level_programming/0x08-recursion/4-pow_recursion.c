#include "main.h"
/**
 * _pow_recursion - finds the power of a number
 * @x: base
 * @y: power
 *
 * Return: -1 if y < 0 otherwise x power y
 */
int _pow_recursion(int x, int y)
{
	int power;
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	power = x * _pow_recursion(x, y - 1);
	return (power);
}
