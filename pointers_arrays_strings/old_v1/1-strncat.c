#include "main.h"

/**
 * _strncat - concatenates up to n bytes from src to dest
 * @dest: destination string (must have enough space)
 * @src:  source string
 * @n:    maximum number of bytes to append from src
 *
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
