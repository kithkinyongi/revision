#include "main.h"
/**
 * _isalpha - checks if a character is upper or lowercase
 * @c: character to be checked
 *
 * Return: 1 - c is upper or lower, 0 - otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
