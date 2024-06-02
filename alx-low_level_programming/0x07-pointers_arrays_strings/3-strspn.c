#include "main.h"
/**
 * _strspn - gets the length of the prefix substring
 * @s: string to be checked
 * @accept: substring
 *
 * Return: number of bytes same in s
 */
int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int count;
	
	count = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				count++;
		}
	}
	return (count);
}
