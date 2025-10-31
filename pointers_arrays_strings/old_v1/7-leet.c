#include "main.h"

/**
 * leet - encodes a string into 1337 using one if and two loops
 * @s: string to encode
 * Return: pointer to s
 */
char *leet(char *s)
{
	char from[] = "aAeEoOtTlL";
	char to[]   = "4433007711";
	int i = 0, j;

	while (s[i] != '\0')
	{
		for (j = 0; from[j] != '\0'; j++)
		{
			if (s[i] == from[j]) /* الوحيد */
			{
				s[i] = to[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
