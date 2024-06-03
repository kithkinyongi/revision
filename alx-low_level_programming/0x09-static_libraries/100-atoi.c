#include "main.h"
/**
 * _strcpy - copies a string from one location to the other
 * @dest: destination of the buffer
 * @src: source of the buffer
 *
 * Return: pointer to buffer
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int stringlendest;
	int stringlensrc;

	stringlendest = _strlen(dest);
	stringlensrc = _strlen(src);
	for (i = 0; i < stringlensrc; i++)
		dest[stringlendest + i] = src[i];
	return (dest);
}
