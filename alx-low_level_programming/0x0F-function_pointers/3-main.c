#include "calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - simple calculator
 * @argc: argument count
 * @argv: argumen vector
 *
 * Return: 0 - success :)
 */
int main(int argc, char **argv)
{
	int a;
	int b;
	int result;
	int operator;
	
	if (argc != 4)
	{
		printf("Error");
		exit(98);
	}
	a = atoi(argv[1]);
	operator = atoi(argv[2]);
	b = atoi(argv[3]);
	if (operator != '+' || operator != '-' || operator != '*' || operator != '%' || operator != '/')
	{
		printf("Error\n");
		Exit(98);
	}
	result = int (*get_op_func(char *s))(int a, int b);
	printf("%d\n", result);
	return (0);
}
