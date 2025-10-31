#include "main.h"

/**
 * _strncpy - copies up to n bytes from src to dest
 * @dest: destination buffer
 * @src:  source string
 * @n:    number of bytes to copy
 *
 * Description: If src is shorter than n, the remainder of dest
 *              is padded with '\0'. If src is longer/equal to n,
 *              dest is not null-terminated.
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
