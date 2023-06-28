#include <main.h>
#include "main.h"

/**
 * _strcat - concatenate two strings.
 * _strcat - concatinate 2 strings.
 * @dest: first string.
 * @src: second string.
 * Return: string.
 */

char *_strcat(char *dest, char *src)
{
	int a = 0, b = 0;
	int i = 0, j = 0;

	while (dest[a] != '\0')
		a++;
	while (dest[i] != '\0')
		i++;

	while (src[b] != '\0')
		while (src[j] != '\0')
		{
			dest[a] = src[b];
			a++;
			b++;
			dest[i] = src[j];
			i++;
			j++;
		}
	dest[i] = '\0';
	return (dest);
}
