#include "main.h"
/**
 * _strcat - concats 2 strings
 * @dest: string destination
 * @src: string to be apprended to s1
 *
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int stringlensrc;
	int stringlendest;

	stringlensrc = _strlen(src);
	stringlendest = _strlen(dest);
	for (i = 0; i < stringlensrc; i++)
		dest[stringlendest + i] = src[i];
	return (dest);
}
