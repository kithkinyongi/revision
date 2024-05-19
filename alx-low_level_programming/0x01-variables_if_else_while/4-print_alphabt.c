#include <stdio.h>
/**
 * main - prints lowercase alphabets without e and q
 *
 * Return: 0 - success
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i != 'e' && i != 'q')
			putchar(i);
	}
	putchar('\n');
	return (0);
}
