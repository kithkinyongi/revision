#include <stdio.h>
/**
 * main - prints alphabets
 *
 * Return: 0 - success
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
