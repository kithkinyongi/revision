#include <stdio.h>
/**
 * main - prints hexadecimal characters
 *
 * Return: 0 - success
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
		putchar(i);
	for (i = 97; i <= 'f'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
