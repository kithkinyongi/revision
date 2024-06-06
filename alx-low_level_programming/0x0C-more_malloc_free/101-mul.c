#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - multiplies the number of args passed to it
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 - success
 */
int main(int argc, char **argv)
{
	int firstArg;
	int secondArg;
	(void) argc;

	firstArg = atoi(argv[1]);
	secondArg = atoi(argv[2]);

	printf("%d\n", firstArg * secondArg);
	return (0);
}
