#include <stdio.h>
/**
 * main - sum of multiples of 3 and 5 in the 1st 1024 numbers
 *
 * Return: 0 - success
 */
int main(void)
{
	int sum;
	int i;

	sum = 0;
	for (i = 1; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
