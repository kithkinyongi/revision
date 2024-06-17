#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: string to be printed
 * @f: funtion pointer
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
