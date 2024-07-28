#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copy a string
 * @dest: copied string
 * @src: string to be copied
 * Return: Always 0
 */
char *_strcpy(char *dest, char *src)
{
	int j = 0;

	while (src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

